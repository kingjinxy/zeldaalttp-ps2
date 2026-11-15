	thumb_func_start sub_080078B0
sub_080078B0: @ 0x080078B0
	push {lr}
	bl sub_080075C8
	bl sub_080075F4
	mov r1, sl
	ldr r2, [r1, #0x28]
	ldrh r3, [r2, #0x2a]
	strh r3, [r0, #0xa]
	movs r2, #1
	strb r2, [r0, #4]
	ldrb r2, [r0, #1]
	ldr r3, _08007A28 @ =0x08007458
	lsls r2, r2, #2
	adds r2, r2, r3
	ldrh r3, [r2]
	push {r2}
	bl sub_08007740
	pop {r2}
	ldrb r1, [r2, #2]
	movs r3, #0xf
	ands r3, r1
	strb r3, [r0, #0xf]
	movs r3, #0x80
	ands r3, r1
	beq _080078EA
	bl sub_08007594
_080078EA:
	pop {pc}

