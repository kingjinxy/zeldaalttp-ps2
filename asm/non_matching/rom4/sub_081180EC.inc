	THUMB_FUNC_START sub_081180EC
sub_081180EC: @ 0x081180EC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080C177C
	ldr r1, _081181F8  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r5, r1, r0
	ldrh r0, [r5]
	ldr r2, _081181FC  @ =0x0000096C
	add r6, r1, r2
	strh r0, [r6]
	ldr r3, _08118200  @ =0x00000964
	add r0, r1, r3
	ldrh r2, [r0]
	add r3, r3, #12
	add r0, r1, r3
	strh r2, [r0]
	ldr r2, _08118204  @ =0x00001855
	add r0, r1, r2
	add r4, r4, r0
	ldrb r2, [r4]
	add r3, r3, #8
	add r0, r1, r3
	strb r2, [r0]
	ldrb r0, [r4]
	lsl r2, r0, #2
	sub r3, r3, #4
	add r4, r1, r3
	strb r2, [r4]
	lsl r0, r0, #3
	sub r3, r3, #12
	add r2, r1, r3
	strb r0, [r2]
	ldr r0, _08118208  @ =0x00001732
	add r3, r1, r0
	mov r0, #3
	strb r0, [r3]
	add r7, r1, #0
	mov r9, r2
	mov r10, r3
	ldr r1, _0811820C  @ =gUnknown_03003E74
	mov r8, r1
	add r6, r4, #0
_08118154:
	mov r2, r9
	ldrb r1, [r2]
	ldr r0, _08118210  @ =gUnknown_0817F0D8
	lsr r1, r1, #1
	lsl r1, r1, #1
	add r0, r1, r0
	ldrh r0, [r0]
	ldr r3, _08118214  @ =gUnknown_03002B9C
	ldrh r3, [r3]
	add r0, r0, r3
	ldr r5, _08118218  @ =gUnknown_03002B90
	strh r0, [r5]
	mov r0, #151
	lsl r0, r0, #4
	add r2, r7, r0
	ldr r0, _0811821C  @ =gUnknown_0817F170
	add r1, r1, r0
	ldrh r0, [r1]
	ldrh r2, [r2]
	add r0, r0, r2
	ldr r2, _08118200  @ =0x00000964
	add r1, r7, r2
	strh r0, [r1]
	mov r3, r8
	ldrh r0, [r3]
	ldrh r1, [r1]
	ldrh r5, [r5]
	str r5, [sp, #4]
	ldr r4, _08118220  @ =gUnknown_0817F208
	add r2, r2, #20
	add r3, r7, r2
	ldrb r3, [r3]
	lsl r3, r3, #24
	asr r3, r3, #24
	add r3, r3, r4
	ldrb r3, [r3]
	ldr r5, _08118224  @ =gUnknown_0817F21C
	mov r4, #0
	ldrsb r4, [r6, r4]
	add r4, r4, r5
	ldrb r5, [r4]
	mov r4, #207
	and r4, r4, r5
	ldr r5, _08118228  @ =0x00001724
	ldrb r2, [r5, r7]
	mov r12, r2
	mov r5, r12
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r2, #0
	str r2, [sp]
	ldr r2, [sp, #4]
	bl sub_080C6368
	mov r3, r8
	ldrh r0, [r3]
	add r0, r0, #1
	strh r0, [r3]
	mov r5, r9
	ldrb r0, [r5]
	add r0, r0, #2
	strb r0, [r5]
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	mov r1, r10
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08118154
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081181F8:
	.4byte gRam
_081181FC:
	.4byte 0x0000096C
_08118200:
	.4byte 0x00000964
_08118204:
	.4byte 0x00001855
_08118208:
	.4byte 0x00001732
_0811820C:
	.4byte gUnknown_03003E74
_08118210:
	.4byte gUnknown_0817F0D8
_08118214:
	.4byte gUnknown_03002B9C
_08118218:
	.4byte gUnknown_03002B90
_0811821C:
	.4byte gUnknown_0817F170
_08118220:
	.4byte gUnknown_0817F208
_08118224:
	.4byte gUnknown_0817F21C
_08118228:
	.4byte 0x00001724
	THUMB_FUNC_END sub_081180EC

