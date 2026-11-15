	THUMB_FUNC_START sub_08017B80
sub_08017B80: @ 0x08017B80
	push {r4,lr}
	add r4, r0, #0
	ldr r1, _08017BA0  @ =gUnknown_081396C4
	ldrb r0, [r4, #21]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	add r0, r4, #0
	bl sub_08017EE4
	pop {r4}
	pop {r0}
	bx r0
_08017BA0:
	.4byte gUnknown_081396C4
	THUMB_FUNC_END sub_08017B80

