	.syntax unified
	THUMB_FUNC_START sub_08009924
sub_08009924: @ 0X08009924
	mov r3, lr
	push {r3, r4, r5}
	adds r4, r0, #0
	adds r5, r1, #0
	bl sub_080095A4
	adds r0, r4, #0
	bl sub_08009874
	cmp r0, #0
	bne.n _0800994C
	adds r0, r4, #0
	bl sub_080098DC
	lsls r0, r0, #2
	ldr r1, [r5, r0]
	adds r0, r4, #0
	pop {r3, r4, r5}
	mov lr, r3
	bx r1
_0800994C:
	ldr r1, [pc, #928]
	lsls r0, r0, #2
	ldr r1, [r1, r0]
	adds r0, r4, #0
	pop {r3, r4, r5}
	mov lr, r3
	bx r1
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0xf5
	.byte 0x95
	.byte 0x00
	.byte 0x08
	.byte 0x41
	.byte 0x3a
	.byte 0x00
	.byte 0x08
	.byte 0x45
	.byte 0x3a
	.byte 0x00
	.byte 0x08
	.syntax unified
	.thumb
