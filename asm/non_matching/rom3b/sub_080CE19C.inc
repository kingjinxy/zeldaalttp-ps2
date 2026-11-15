	THUMB_FUNC_START sub_080CE19C
sub_080CE19C: @ 0x080CE19C
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080CD8BC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080CE24E
	ldr r2, _080CE25C  @ =gRam
	ldr r1, _080CE260  @ =0x000012FE
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsr r0, r0, #1
	mov r1, #6
	and r0, r0, r1
	ldr r3, _080CE264  @ =0x0000096C
	add r1, r2, r3
	strb r0, [r1]
	mov r7, #0
	ldr r4, _080CE268  @ =0x0000096D
	add r1, r2, r4
	mov r0, #1
	strb r0, [r1]
	mov r8, r2
	add r6, r1, #0
	ldr r0, _080CE26C  @ =0x00000964
	add r0, r0, r8
	mov r9, r0
_080CE1E0:
	ldr r0, _080CE264  @ =0x0000096C
	add r0, r0, r8
	ldrb r0, [r0]
	ldrb r5, [r6]
	orr r5, r5, r0
	ldr r0, _080CE270  @ =gUnknown_03003E74
	ldrh r0, [r0]
	add r0, r0, r7
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r8
	ldr r1, _080CE274  @ =gUnknown_08172E6F
	add r1, r5, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080CE278  @ =gUnknown_08172E77
	add r2, r5, r2
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	mov r3, r9
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080CE27C  @ =gUnknown_08172E7F
	add r3, r5, r3
	ldrb r3, [r3]
	ldr r4, _080CE280  @ =gUnknown_08172E87
	add r4, r5, r4
	ldrb r4, [r4]
	lsl r4, r4, #8
	orr r3, r3, r4
	ldr r4, _080CE284  @ =gUnknown_08172E8F
	add r5, r5, r4
	ldrb r4, [r5]
	str r4, [sp]
	bl sub_080C6368
	ldrb r1, [r6]
	sub r1, r1, #1
	strb r1, [r6]
	add r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	lsl r1, r1, #24
	cmp r1, #0
	bge _080CE1E0
_080CE24E:
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080CE25C:
	.4byte gRam
_080CE260:
	.4byte 0x000012FE
_080CE264:
	.4byte 0x0000096C
_080CE268:
	.4byte 0x0000096D
_080CE26C:
	.4byte 0x00000964
_080CE270:
	.4byte gUnknown_03003E74
_080CE274:
	.4byte gUnknown_08172E6F
_080CE278:
	.4byte gUnknown_08172E77
_080CE27C:
	.4byte gUnknown_08172E7F
_080CE280:
	.4byte gUnknown_08172E87
_080CE284:
	.4byte gUnknown_08172E8F
	THUMB_FUNC_END sub_080CE19C

