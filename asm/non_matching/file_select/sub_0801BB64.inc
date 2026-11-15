	THUMB_FUNC_START sub_0801BB64
sub_0801BB64: @ 0x0801BB64
	push {r4,lr}
	add r4, r0, #0
	bl 0x08009E44
	add r0, r4, #0
	add r0, r0, #67
	ldrb r0, [r0]
	cmp r0, #0
	bne _0801BB7A
	ldr r0, _0801BB80  @ =0x0000FFFE
	strh r0, [r4, #58]
_0801BB7A:
	pop {r4}
	pop {r0}
	bx r0
_0801BB80:
	.4byte 0x0000FFFE
	THUMB_FUNC_END sub_0801BB64

