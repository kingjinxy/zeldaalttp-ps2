	THUMB_FUNC_START sub_0809E4FC
sub_0809E4FC: @ 0x0809E4FC
	push {r4,lr}
	ldr r2, _0809E528  @ =gRam
	ldr r1, _0809E52C  @ =gUnknown_08167FA2
	ldr r0, _0809E530  @ =0x00000BBA
	add r3, r2, r0
	ldrb r0, [r3]
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r4, _0809E534  @ =0x00000B1E
	add r0, r2, r4
	strh r1, [r0]
	ldr r1, _0809E538  @ =gUnknown_08167FA5
	ldrb r0, [r3]
	add r0, r0, r1
	ldrb r0, [r0]
	mov r1, #161
	lsl r1, r1, #4
	add r2, r2, r1
	strb r0, [r2]
	pop {r4}
	pop {r0}
	bx r0
_0809E528:
	.4byte gRam
_0809E52C:
	.4byte gUnknown_08167FA2
_0809E530:
	.4byte 0x00000BBA
_0809E534:
	.4byte 0x00000B1E
_0809E538:
	.4byte gUnknown_08167FA5
	THUMB_FUNC_END sub_0809E4FC

