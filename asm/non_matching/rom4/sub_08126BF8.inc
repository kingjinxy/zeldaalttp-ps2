	THUMB_FUNC_START sub_08126BF8
sub_08126BF8: @ 0x08126BF8
	push {r4-r6,lr}
	ldr r2, _08126C34  @ =gRam
	ldr r0, _08126C38  @ =0x00000A38
	add r1, r2, r0
	mov r6, #1
	mov r0, #1
	strh r0, [r1]
	ldr r4, _08126C3C  @ =gUnknown_03000050
	strb r6, [r4, #2]
	ldr r0, _08126C40  @ =0x00001B08
	add r5, r2, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _08126C2E
	ldr r1, _08126C44  @ =gUnknown_08180958
	ldrb r0, [r4]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	strb r6, [r5]
	mov r0, #0
	strb r0, [r4, #2]
	ldrh r0, [r4, #8]
	add r0, r0, #1
	strh r0, [r4, #8]
_08126C2E:
	pop {r4-r6}
	pop {r0}
	bx r0
_08126C34:
	.4byte gRam
_08126C38:
	.4byte 0x00000A38
_08126C3C:
	.4byte gUnknown_03000050
_08126C40:
	.4byte 0x00001B08
_08126C44:
	.4byte gUnknown_08180958
	THUMB_FUNC_END sub_08126BF8

