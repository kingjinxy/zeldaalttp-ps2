	THUMB_FUNC_START sub_081233BC
sub_081233BC: @ 0x081233BC
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	lsl r1, r1, #24
	lsr r4, r1, #24
	add r0, r4, #0
	mov r1, sp
	bl sub_080AE588
	lsl r0, r0, #24
	cmp r0, #0
	bne _0812347C
	add r0, r5, #0
	add r1, r4, #0
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r3, r0, #24
	cmp r3, #0
	bne _0812347C
	ldr r2, _08123484  @ =gRam
	mov r1, sp
	ldr r4, _08123488  @ =0x00000E3D
	add r0, r2, r4
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #2
	strb r1, [r0]
	mov r1, sp
	ldr r4, _0812348C  @ =0x00001832
	add r0, r2, r4
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #3
	strb r1, [r0]
	mov r1, sp
	ldr r4, _08123490  @ =0x00000E1F
	add r0, r2, r4
	ldrb r1, [r1]
	add r0, r0, r1
	strb r3, [r0]
	mov r1, sp
	ldr r4, _08123494  @ =0x00001844
	add r0, r2, r4
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #32
	strb r1, [r0]
	mov r1, sp
	ldr r4, _08123498  @ =0x00000E29
	add r0, r2, r4
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #116
	strb r1, [r0]
	mov r1, sp
	ldr r4, _0812349C  @ =0x00000A88
	add r0, r2, r4
	ldrb r1, [r1]
	add r0, r0, r1
	strb r3, [r0]
	mov r1, sp
	ldr r4, _081234A0  @ =0x00001818
	add r0, r2, r4
	ldrb r1, [r1]
	add r0, r0, r1
	strb r3, [r0]
	mov r1, sp
	ldr r4, _081234A4  @ =0x00000A92
	add r0, r2, r4
	ldrb r1, [r1]
	add r0, r0, r1
	strb r3, [r0]
	mov r1, sp
	ldr r4, _081234A8  @ =0x0000183C
	add r0, r2, r4
	ldrb r1, [r1]
	add r0, r0, r1
	strb r3, [r0]
	mov r0, #150
	lsl r0, r0, #4
	add r1, r2, r0
	mov r0, #241
	lsl r0, r0, #3
	strh r0, [r1]
	ldr r4, _081234AC  @ =0x00000964
	add r2, r2, r4
	mov r0, #128
	lsl r0, r0, #2
	strh r0, [r2]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
_0812347C:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_08123484:
	.4byte gRam
_08123488:
	.4byte 0x00000E3D
_0812348C:
	.4byte 0x00001832
_08123490:
	.4byte 0x00000E1F
_08123494:
	.4byte 0x00001844
_08123498:
	.4byte 0x00000E29
_0812349C:
	.4byte 0x00000A88
_081234A0:
	.4byte 0x00001818
_081234A4:
	.4byte 0x00000A92
_081234A8:
	.4byte 0x0000183C
_081234AC:
	.4byte 0x00000964
	THUMB_FUNC_END sub_081233BC

