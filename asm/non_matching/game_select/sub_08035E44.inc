	THUMB_FUNC_START sub_08035E44
sub_08035E44: @ 0x08035E44
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _08035E58
	sub r0, r0, #1
	strb r0, [r4, #23]
	b _08035E7E
_08035E58:
	add r0, r4, #0
	bl sub_0803CC20
	mov r0, #54
	ldrsh r1, [r4, r0]
	ldr r0, _08035E84  @ =0x000001F5
	cmp r1, r0
	ble _08035E7E
	add r0, r0, #3
	strh r0, [r4, #54]
	mov r0, #16
	strb r0, [r4, #20]
	add r0, r4, #0
	mov r1, #1
	bl sub_08003870
	ldr r0, _08035E88  @ =0x00000217
	bl play_sound
_08035E7E:
	pop {r4}
	pop {r0}
	bx r0
_08035E84:
	.4byte 0x000001F5
_08035E88:
	.4byte 0x00000217
	THUMB_FUNC_END sub_08035E44

