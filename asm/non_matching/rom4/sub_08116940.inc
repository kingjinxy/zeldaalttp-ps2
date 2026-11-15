	THUMB_FUNC_START sub_08116940
sub_08116940: @ 0x08116940
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r0, #4
	mov r1, #35
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r3, r0, #24
	cmp r3, #0
	bne _081169C4
	ldr r2, _081169CC  @ =gRam
	mov r1, sp
	ldr r5, _081169D0  @ =0x00000E29
	add r0, r2, r5
	ldrb r1, [r1]
	add r0, r0, r1
	strb r3, [r0]
	mov r1, sp
	ldr r3, _081169D4  @ =0x00000E1F
	add r0, r2, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	mov r1, sp
	ldr r5, _081169D8  @ =0x00001844
	add r0, r2, r5
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #7
	strb r1, [r0]
	ldr r1, _081169DC  @ =0x00000ED2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r3, r3, #211
	add r0, r2, r3
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #4
	mov r5, #150
	lsl r5, r5, #4
	add r0, r2, r5
	strh r1, [r0]
	ldr r1, _081169E0  @ =0x00000EE2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r3, r3, #16
	add r0, r2, r3
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r5, r5, #4
	add r2, r2, r5
	strh r1, [r2]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
_081169C4:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_081169CC:
	.4byte gRam
_081169D0:
	.4byte 0x00000E29
_081169D4:
	.4byte 0x00000E1F
_081169D8:
	.4byte 0x00001844
_081169DC:
	.4byte 0x00000ED2
_081169E0:
	.4byte 0x00000EE2
	THUMB_FUNC_END sub_08116940

