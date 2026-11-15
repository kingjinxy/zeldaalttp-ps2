	THUMB_FUNC_START sub_0812541C
sub_0812541C: @ 0x0812541C
	push {r4-r7,lr}
	ldr r2, _081254BC  @ =gRam
	ldr r3, _081254C0  @ =gUnknown_081804E8
	ldr r1, _081254C4  @ =0x00001B0E
	add r0, r2, r1
	ldrh r0, [r0]
	lsr r0, r0, #8
	add r1, r0, r3
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldr r4, _081254C8  @ =0x00001B30
	add r5, r2, r4
	strh r1, [r5]
	add r0, r0, #64
	add r0, r0, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldr r7, _081254CC  @ =0x00001B32
	add r6, r2, r7
	strh r0, [r6]
	ldr r1, _081254D0  @ =0x00001B10
	add r0, r2, r1
	ldrh r0, [r0]
	lsr r0, r0, #8
	add r1, r0, r3
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	add r7, r7, #2
	add r4, r2, r7
	strh r1, [r4]
	add r0, r0, #64
	add r0, r0, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldr r1, _081254D4  @ =0x00001B36
	add r3, r2, r1
	strh r0, [r3]
	mov r7, #0
	ldrsh r1, [r5, r7]
	mov r7, #0
	ldrsh r0, [r4, r7]
	mul r0, r1, r0
	asr r0, r0, #6
	ldr r7, _081254D8  @ =0x00001B38
	add r1, r2, r7
	strh r0, [r1]
	mov r0, #0
	ldrsh r1, [r6, r0]
	mov r7, #0
	ldrsh r0, [r3, r7]
	mul r0, r1, r0
	asr r0, r0, #6
	ldr r7, _081254DC  @ =0x00001B3E
	add r1, r2, r7
	strh r0, [r1]
	mov r0, #0
	ldrsh r1, [r5, r0]
	mov r5, #0
	ldrsh r0, [r3, r5]
	mul r0, r1, r0
	asr r0, r0, #6
	sub r7, r7, #4
	add r1, r2, r7
	strh r0, [r1]
	mov r0, #0
	ldrsh r1, [r6, r0]
	mov r3, #0
	ldrsh r0, [r4, r3]
	mul r0, r1, r0
	asr r0, r0, #6
	ldr r4, _081254E0  @ =0x00001B3C
	add r2, r2, r4
	strh r0, [r2]
	pop {r4-r7}
	pop {r0}
	bx r0
_081254BC:
	.4byte gRam
_081254C0:
	.4byte gUnknown_081804E8
_081254C4:
	.4byte 0x00001B0E
_081254C8:
	.4byte 0x00001B30
_081254CC:
	.4byte 0x00001B32
_081254D0:
	.4byte 0x00001B10
_081254D4:
	.4byte 0x00001B36
_081254D8:
	.4byte 0x00001B38
_081254DC:
	.4byte 0x00001B3E
_081254E0:
	.4byte 0x00001B3C
	THUMB_FUNC_END sub_0812541C

