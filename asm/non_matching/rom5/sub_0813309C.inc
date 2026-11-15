	THUMB_FUNC_START sub_0813309C
sub_0813309C: @ 0x0813309C
	push {r4,lr}
	ldr r2, _081330D8  @ =gUnknown_0822BBB4
	ldr r1, _081330DC  @ =gRam
	ldr r3, _081330E0  @ =0x00000CA5
	add r0, r1, r3
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	mov r3, #7
	lsl r0, r0, #1
	ldr r4, _081330E4  @ =gUnknown_02030400
	add r2, r0, r4
	mov r0, #202
	lsl r0, r0, #4
	add r1, r1, r0
	ldrh r0, [r1]
	lsl r0, r0, #1
	ldr r4, _081330E8  @ =gUnknown_02000AA0
	add r1, r0, r4
_081330C4:
	ldrh r0, [r2]
	strh r0, [r1]
	add r2, r2, #2
	add r1, r1, #2
	sub r3, r3, #1
	cmp r3, #0
	bge _081330C4
	pop {r4}
	pop {r0}
	bx r0
_081330D8:
	.4byte gUnknown_0822BBB4
_081330DC:
	.4byte gRam
_081330E0:
	.4byte 0x00000CA5
_081330E4:
	.4byte gUnknown_02030400
_081330E8:
	.4byte gUnknown_02000AA0
	THUMB_FUNC_END sub_0813309C

