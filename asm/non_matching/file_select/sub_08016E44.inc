	THUMB_FUNC_START sub_08016E44
sub_08016E44: @ 0x08016E44
	push {lr}
	add r2, r0, #0
	ldrb r0, [r2, #20]
	cmp r0, #3
	bne _08016E5A
	mov r0, #1
	strb r0, [r2, #20]
	mov r0, #128
	str r0, [r2, #12]
	mov r0, #20
	strb r0, [r2, #24]
_08016E5A:
	ldr r1, _08016E68  @ =gUnknown_08139284
	add r0, r2, #0
	bl 0x080098A0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08016E68:
	.4byte gUnknown_08139284
	THUMB_FUNC_END sub_08016E44

