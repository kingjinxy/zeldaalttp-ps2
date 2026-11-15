	thumb_func_start sub_08000EFC
sub_08000EFC: @ 0x08000EFC
	push {r1}
	ldr r6, _08000FEC @ =0x03000470
	ldrh r7, [r6]
	ldrh r5, [r1, #0x32]
	subs r5, r5, r7
	ldrh r7, [r6, #2]
	ldrh r6, [r1, #0x36]
	subs r6, r6, r7
	movs r3, #0x2e
	ldrsb r3, [r1, r3]
	adds r6, r6, r3
	ldrh r7, [r1, #0x1e]
	lsrs r7, r7, #4
	ldr r3, _08000FA0 @ =0x00000C00
	ands r7, r3
	ldrh r3, [r2]
	adds r2, #2
_08000F1E:
	subs r3, #1
	bmi _08000F66
	cmp r0, #0x78
	bhs _08000F66
	push {r3, r5, r6}
	eors r4, r4
	ldrsh r3, [r2, r4]
	adds r5, r5, r3
	ldr r3, _08000FC0 @ =0x000001FF
	ands r5, r3
	adds r4, #2
	ldrsh r3, [r2, r4]
	adds r6, r6, r3
	movs r3, #0xff
	ands r6, r3
	adds r2, r2, r4
	adds r2, #2
	ldr r4, _08000FF0 @ =0x03005E04
	ldr r4, [r4]
	adds r3, r0, #0
	lsls r3, r3, #3
	adds r4, r4, r3
	ldrh r3, [r2]
	orrs r5, r3
	adds r2, #2
	ldrh r3, [r2]
	adds r2, #2
	orrs r3, r7
	strh r6, [r4]
	adds r4, #2
	strh r5, [r4]
	adds r4, #2
	strh r3, [r4]
	adds r0, #1
	pop {r3, r5, r6}
	b _08000F1E
_08000F66:
	pop {r1}
	mov pc, lr
	.align 2, 0
_08000F6C: .4byte 0x03000204
_08000F70: .4byte 0x03000954
_08000F74: .4byte 0x03000C10
_08000F78: .4byte 0x03000210
_08000F7C: .4byte 0x03005C00
_08000F80: .4byte 0x03000960
_08000F84: .4byte 0x03005E04
_08000F88: .4byte 0x00000200
_08000F8C: .4byte 0x03000E20
_08000F90: .4byte 0x08000B9C
_08000F94: .4byte 0x08000B8C
_08000F98: .4byte 0x0862F52C
_08000F9C: .4byte 0x0000F000
_08000FA0: .4byte 0x00000C00
_08000FA4: .4byte 0x03000470
_08000FA8: .4byte 0x3E003F00
_08000FAC: .4byte 0x03005E04
_08000FB0: .4byte 0x08000AF4
_08000FB4: .4byte 0x08000AF8
_08000FB8: .4byte 0x08000AF8
_08000FBC: .4byte 0x08000AF4
_08000FC0: .4byte 0x000001FF
_08000FC4: .4byte 0x00008000
_08000FC8: .4byte 0x00000FFF
_08000FCC: .4byte 0x03000948
_08000FD0: .4byte 0x00004000
_08000FD4: .4byte 0x00001301
_08000FD8: .4byte 0x40004000
_08000FDC: .4byte 0x00001303
_08000FE0: .4byte 0x00001307
_08000FE4: .4byte 0x00001300
_08000FE8: .4byte 0x03005E04
_08000FEC: .4byte 0x03000470
_08000FF0: .4byte 0x03005E04

	.syntax unified

