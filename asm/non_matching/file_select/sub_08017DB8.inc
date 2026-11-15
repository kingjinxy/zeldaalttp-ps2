	THUMB_FUNC_START sub_08017DB8
sub_08017DB8: @ 0x08017DB8
	push {lr}
	add r2, r0, #0
	mov r0, #4
	strb r0, [r2, #20]
	add r1, r2, #0
	add r1, r1, #61
	mov r0, #252
	strb r0, [r1]
	add r1, r1, #51
	mov r0, #1
	strb r0, [r1]
	sub r1, r1, #49
	mov r0, #17
	strb r0, [r1]
	mov r0, #128
	lsl r0, r0, #10
	str r0, [r2, #16]
	add r1, r1, #29
	ldr r0, _08017DF8  @ =0x000021FF
	strh r0, [r1]
	add r1, r1, #26
	mov r0, #240
	strh r0, [r1]
	add r0, r2, #0
	mov r1, #2
	bl sub_08017D78
	mov r0, #42
	bl 0x08003DFC
	pop {r0}
	bx r0
_08017DF8:
	.4byte 0x000021FF
	THUMB_FUNC_END sub_08017DB8

