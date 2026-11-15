	THUMB_FUNC_START sub_08130030
sub_08130030: @ 0x08130030
	push {r4-r7,lr}
	ldr r2, _08130084  @ =gRam
	ldr r1, _08130088  @ =0x000009C6
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _08130098
	ldr r0, _0813008C  @ =gUnknown_0822BBB2
	ldrb r0, [r0, #1]
	mov r1, #3
	lsl r0, r0, #1
	ldr r3, _08130090  @ =gUnknown_02030000
	add r4, r0, r3
	mov r7, #15
	mov r3, #202
	lsl r3, r3, #4
	add r0, r2, r3
	ldrh r0, [r0]
	mov r2, #136
	lsl r2, r2, #1
	add r0, r0, r2
	ldr r6, _08130094  @ =gUnknown_02000800
	lsl r3, r0, #1
_08130062:
	add r2, r7, #0
	sub r5, r1, #1
	cmp r2, #0
	blt _0813007C
	add r1, r3, r6
_0813006C:
	ldrh r0, [r4]
	strh r0, [r1]
	add r4, r4, #2
	add r1, r1, #2
	add r3, r3, #2
	sub r2, r2, #1
	cmp r2, #0
	bge _0813006C
_0813007C:
	add r1, r5, #0
	cmp r1, #0
	bge _08130062
	b _081300D8
_08130084:
	.4byte gRam
_08130088:
	.4byte 0x000009C6
_0813008C:
	.4byte gUnknown_0822BBB2
_08130090:
	.4byte gUnknown_02030000
_08130094:
	.4byte gUnknown_02000800
_08130098:
	ldr r0, _081300E0  @ =gUnknown_0822BBB2
	ldrb r0, [r0]
	mov r1, #3
	lsl r0, r0, #1
	ldr r3, _081300E4  @ =gUnknown_02030000
	add r4, r0, r3
	mov r7, #15
	mov r3, #202
	lsl r3, r3, #4
	add r0, r2, r3
	ldrh r0, [r0]
	mov r2, #136
	lsl r2, r2, #1
	add r0, r0, r2
	ldr r6, _081300E8  @ =gUnknown_02000800
	lsl r3, r0, #1
_081300B8:
	add r2, r7, #0
	sub r5, r1, #1
	cmp r2, #0
	blt _081300D2
	add r1, r3, r6
_081300C2:
	ldrh r0, [r4]
	strh r0, [r1]
	add r4, r4, #2
	add r1, r1, #2
	add r3, r3, #2
	sub r2, r2, #1
	cmp r2, #0
	bge _081300C2
_081300D2:
	add r1, r5, #0
	cmp r1, #0
	bge _081300B8
_081300D8:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081300E0:
	.4byte gUnknown_0822BBB2
_081300E4:
	.4byte gUnknown_02030000
_081300E8:
	.4byte gUnknown_02000800
	THUMB_FUNC_END sub_08130030

