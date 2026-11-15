	arm_func_start sub_080008A8
sub_080008A8: @ 0x080008A8
	mov r2, #0
	ldrb r1, [r0, #0x3c]
	cmp r1, #0x80
	blo _08000980
	push {r4, r5, r6, r7, r8, sb, sl}
	mov sb, r2
	ldr sl, _08000994 @ =0x08137B10
	ldrh r4, [r0, #0x5c]
	ldr r1, _08000998 @ =0x02016D50
	ldr r1, [r1]
	mov r2, r1
	ldrh r5, [r0, #0x32]
	add r5, r5, #0x38
	ldrh r6, [r0, #0x36]
	add r6, r6, #0x38
	ldrh r7, [r0, #0x50]
_080008E8:
	ldr r3, [r1, #8]
	cmp r3, #0
	beq _0800096C
	ldrb r8, [r3, #0x3c]
	cmp r8, #0x80
	blo _0800096C
	and r8, r8, #0xf
	ldr r8, [sl, r8, lsl #2]
	ands r8, r8, r4
	beq _0800096C
	ldrh r8, [r3, #0x32]
	sub r8, r5, r8
	cmp r8, #0x71
	bhs _0800096C
	ldrh r8, [r3, #0x36]
	sub r8, r6, r8
	cmp r8, #0x71
	bhs _0800096C
	ldrh r8, [r3, #0x50]
	and r8, r7, r8
	lsrs r8, r8, #0xe
	beq _0800096C
	cmp r3, r0
	beq _0800096C
	add sb, sb, #1
	ldrb r8, [r1, #0xc]
	cmp r8, #0x20
	bhs _0800096C
	add ip, r8, #1
	strb ip, [r1, #0xc]
	lsl r8, r8, #2
	add r8, r8, #0x10
	str r0, [r1, r8]
_0800096C:
	ldr r1, [r1, #4]
	cmp r1, r2
	bne _080008E8
	mov r2, sb
	pop {r4, r5, r6, r7, r8, sb, sl}
_08000980:
	ldrb r3, [r0, #8]
	cmp r3, #3
	bne _08000990
	strb r2, [r0, #0x6b]
_08000990:
	bx lr
	.align 2, 0
_08000994: .4byte 0x08137B10
_08000998: .4byte 0x02016D50

