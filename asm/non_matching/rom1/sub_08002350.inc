	thumb_func_start sub_08002350
sub_08002350: @ 0x08002350
	push {lr}
	push {r0, r1}
	movs r1, #0
	movs r2, #3
	bl sub_08009444
	adds r0, r1, #0
	ldr r1, _0800240C @ =0x00004000
	tst r0, r1
	bne _08002384
	ldr r1, _08002410 @ =0x08001010
	bl sub_080012D8
	cmp r3, #4
	bne _08002384
	pop {r0, r1}
	push {r0, r1}
	ldrh r2, [r1, #0x24]
	ldr r1, _08002414 @ =0x00000176
	subs r2, r2, r1
	ldrb r1, [r0, #0xa]
	cmp r2, r1
	beq _08002384
	movs r2, #1
	pop {r0, r1}
	pop {pc}
_08002384:
	eors r2, r2
	pop {r0, r1}
	pop {pc}
	.align 2, 0

