	thumb_func_start sub_08000BAC
sub_08000BAC: @ 0x08000BAC
	push {lr}
	push {r4, r5, r6, r7}
	mov r4, r8
	mov r5, sb
	mov r6, sl
	mov r7, fp
	push {r4, r5, r6, r7}
	mov r4, ip
	push {r4}
	ldr r0, _08000F6C @ =0x03000204
	ldrb r0, [r0]
	ldr r1, _08000F70 @ =0x03000954
	adds r0, r0, r1
	movs r1, #1
	strb r1, [r0]
	eors r0, r0
	ldr r1, _08000F74 @ =0x03000C10
	bl sub_08000C10
	ldr r1, _08000F78 @ =0x03000210
	bl sub_08000C10
	ldr r1, _08000F7C @ =0x03005C00
	bl sub_08000C10
	ldr r1, _08000F80 @ =0x03000960
	bl sub_08000C10
	ldr r1, _08000F84 @ =0x03005E04
	ldr r1, [r1]
	adds r2, r0, #0
	lsls r2, r2, #3
	adds r1, r1, r2
	ldr r3, _08000F88 @ =0x00000200
_08000BF0:
	cmp r0, #0x78
	bhs _08000BFC
	strh r3, [r1]
	adds r1, #8
	adds r0, #1
	b _08000BF0
_08000BFC:
	pop {r4}
	mov ip, r4
	pop {r4, r5, r6, r7}
	mov r8, r4
	mov sb, r5
	mov sl, r6
	mov fp, r7
	pop {r4, r5, r6, r7}
	pop {pc}
	.align 2, 0

