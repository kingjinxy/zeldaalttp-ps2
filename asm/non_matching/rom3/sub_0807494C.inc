	THUMB_FUNC_START sub_0807494C
sub_0807494C: @ 0x0807494C
	push {lr}
	ldr r1, _08074974  @ =gRam
	mov r0, #201
	lsl r0, r0, #4
	add r2, r1, r0
	ldrh r0, [r2]
	add r0, r0, #1
	strh r0, [r2]
	ldr r2, _08074978  @ =gUnknown_0814D694
	ldr r0, _0807497C  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08074974:
	.4byte gRam
_08074978:
	.4byte gUnknown_0814D694
_0807497C:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0807494C

