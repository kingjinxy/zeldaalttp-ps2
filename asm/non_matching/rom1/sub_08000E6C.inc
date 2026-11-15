	thumb_func_start sub_08000E6C
sub_08000E6C: @ 0x08000E6C
	movs r2, #0x42
	ldrsb r2, [r1, r2]
	movs r3, #8
	tst r2, r3
	bne _08000E7E
	ldr r3, _08000FCC @ =0x03000948
	ldrb r3, [r3]
	lsrs r3, r3, #1
	bhs _08000EF8
_08000E7E:
	movs r3, #4
	ands r2, r3
	bne _08000E8A
	ldrb r2, [r1, #0x1e]
	orrs r2, r2
	beq _08000EF8
_08000E8A:
	cmp r0, #0x78
	bhs _08000EF8
	mov r4, r8
	mov r5, sl
	movs r2, #0x12
	ldrsb r2, [r1, r2]
	push {r2}
	ldr r2, _08000FA0 @ =0x00000C00
	ands r4, r2
	ldrb r2, [r1]
	movs r3, #0x30
	ands r2, r3
	cmp r2, #0x10
	beq _08000EC6
	cmp r2, #0x20
	beq _08000EB6
	cmp r2, #0x30
	beq _08000EBE
	ldr r7, _08000FD0 @ =0x00004000
	ldr r3, _08000FD4 @ =0x00001301
	subs r5, #8
	b _08000ECC
_08000EB6:
	ldr r7, _08000FD8 @ =0x40004000
	ldr r3, _08000FDC @ =0x00001303
	subs r5, #0x10
	b _08000ECC
_08000EBE:
	ldr r7, _08000FD8 @ =0x40004000
	ldr r3, _08000FE0 @ =0x00001307
	subs r5, #0x10
	b _08000ECC
_08000EC6:
	eors r7, r7
	ldr r3, _08000FE4 @ =0x00001300
	subs r5, #4
_08000ECC:
	add r7, fp
	orrs r3, r4
	pop {r2}
	adds r6, r6, r2
	ldrb r2, [r1, #0x1e]
	subs r6, r6, r2
	ldr r2, _08000FC0 @ =0x000001FF
	ands r5, r2
	lsrs r2, r2, #1
	subs r6, #3
	ands r6, r2
	orrs r7, r6
	lsls r5, r5, #0x10
	orrs r7, r5
	ldr r4, _08000FE8 @ =0x03005E04
	ldr r4, [r4]
	adds r2, r0, #0
	lsls r2, r2, #3
	adds r4, r4, r2
	str r7, [r4]
	strh r3, [r4, #4]
	adds r0, #1
_08000EF8:
	mov pc, lr
	.align 2, 0

