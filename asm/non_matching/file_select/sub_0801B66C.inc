	THUMB_FUNC_START sub_0801B66C
sub_0801B66C: @ 0x0801B66C
	push {r4,lr}
	add r4, r0, #0
	bl sub_08009E44
	add r0, r4, #0
	add r0, r0, #67
	ldrb r0, [r0]
	cmp r0, #0
	bne _0801B682
	ldr r0, _0801B688  @ =0x0000FFFE
	strh r0, [r4, #58]
_0801B682:
	pop {r4}
	pop {r0}
	bx r0
_0801B688:
	.4byte 0x0000FFFE
	THUMB_FUNC_END sub_0801B66C

