	THUMB_FUNC_START sub_0810F024
sub_0810F024: @ 0x0810F024
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _0810F050  @ =gRam
	ldr r2, _0810F054  @ =0x00001052
	add r1, r3, r2
	add r1, r0, r1
	ldrb r2, [r1]
	sub r2, r2, #7
	ldr r1, _0810F058  @ =0x0000096C
	add r3, r3, r1
	mov r1, #5
	strh r1, [r3]
	lsl r1, r2, #2
	add r1, r1, r2
	lsl r1, r1, #3
	ldr r2, _0810F05C  @ =gUnknown_0817D0E4
	add r1, r1, r2
	bl sub_080C94D0
	pop {r0}
	bx r0
_0810F050:
	.4byte gRam
_0810F054:
	.4byte 0x00001052
_0810F058:
	.4byte 0x0000096C
_0810F05C:
	.4byte gUnknown_0817D0E4
	THUMB_FUNC_END sub_0810F024

