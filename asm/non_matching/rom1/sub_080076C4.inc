	thumb_func_start sub_080076C4
sub_080076C4: @ 0x080076C4
	push {lr}
	mov r2, sb
	mov r3, sl
	push {r0, r1, r2, r3}
	ldr r1, _080079E8 @ =0x08000FF4
	ldrb r2, [r0, #0xa]
	lsls r2, r2, #2
	ldr r1, [r1, r2]
	mov sl, r1
	ldr r1, _080079EC @ =0x080071A8
	ldrb r2, [r0, #0xa]
	lsls r2, r2, #2
	ldr r0, [r1, r2]
	movs r1, #4
_080076E0:
	push {r1}
	subs r1, #1
	mov sb, r1
	bl sub_0800750C
	pop {r1}
	adds r0, #0x1c
	subs r1, #1
	bne _080076E0
	mov r1, sl
	ldrb r2, [r1, #0xf]
	movs r3, #2
	ands r2, r3
	strb r2, [r1, #0xf]
	eors r2, r2
	strb r2, [r1, #3]
	strb r2, [r1, #0x1b]
	strb r2, [r1, #0x1e]
	strb r2, [r1, #0xe]
	strb r2, [r1, #1]
	movs r3, #0x3d
	strb r2, [r1, r3]
	movs r3, #0x21
	strb r2, [r1, r3]
	strb r2, [r1, #5]
	strb r2, [r1, #0x1e]
	strb r2, [r1, #4]
	strb r2, [r1, #0xa]
	strb r2, [r1, #0xb]
	str r2, [r1, #0x2c]
	ldrh r2, [r1, #0x36]
	ldr r3, _080079F0 @ =0x0000FF7F
	ands r3, r2
	strh r3, [r1, #0x36]
	pop {r0, r1, r2, r3}
	mov sb, r2
	mov sl, r3
	pop {pc}

