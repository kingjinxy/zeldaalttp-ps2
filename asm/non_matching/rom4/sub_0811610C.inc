	THUMB_FUNC_START sub_0811610C
sub_0811610C: @ 0x0811610C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r3, _08116164  @ =gRam
	ldr r1, _08116168  @ =0x00001844
	add r0, r3, r1
	add r2, r7, r0
	ldrb r4, [r2]
	cmp r4, #0
	bne _0811615C
	ldr r5, _0811616C  @ =0x00001832
	add r0, r3, r5
	add r1, r7, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08116178
	mov r0, #1
	strb r0, [r1]
	ldr r0, _08116170  @ =0x00000E29
	add r1, r3, r0
	add r1, r7, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #4
	bne _08116178
	ldr r1, _08116174  @ =0x00000E15
	add r0, r3, r1
	add r0, r7, r0
	strb r4, [r0]
_0811615C:
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	b _08116224
_08116164:
	.4byte gRam
_08116168:
	.4byte 0x00001844
_0811616C:
	.4byte 0x00001832
_08116170:
	.4byte 0x00000E29
_08116174:
	.4byte 0x00000E15
_08116178:
	add r0, r7, #0
	bl sub_080C177C
	ldr r1, _08116234  @ =gRam
	ldr r3, _08116238  @ =0x0000096C
	add r2, r1, r3
	mov r0, #3
	strb r0, [r2]
	ldr r4, _0811623C  @ =0x00000E29
	add r0, r1, r4
	add r0, r7, r0
	ldrb r0, [r0]
	lsl r0, r0, #26
	lsr r7, r0, #24
	mov r8, r1
	ldr r5, _08116240  @ =gUnknown_03003E74
	mov r9, r5
	mov r10, r2
_0811619C:
	ldr r0, _08116244  @ =gUnknown_0817ED6A
	add r4, r7, r0
	ldrb r0, [r4]
	cmp r0, #255
	beq _08116210
	mov r3, #182
	lsl r3, r3, #5
	add r3, r3, r8
	ldr r0, _08116248  @ =gUnknown_0817ED2A
	lsl r2, r7, #1
	add r0, r2, r0
	ldrh r1, [r0]
	ldrh r3, [r3]
	add r1, r1, r3
	ldr r0, _0811624C  @ =0x00000958
	add r0, r0, r8
	ldrh r0, [r0]
	sub r1, r1, r0
	ldr r0, _08116250  @ =gUnknown_03002B90
	strh r1, [r0]
	ldr r3, _08116254  @ =0x000016C4
	add r3, r3, r8
	ldr r0, _08116258  @ =gUnknown_0817ED4A
	add r2, r2, r0
	ldrh r1, [r2]
	ldrh r3, [r3]
	add r1, r1, r3
	ldr r0, _0811625C  @ =0x00000952
	add r0, r0, r8
	ldrh r0, [r0]
	sub r1, r1, r0
	ldr r2, _08116260  @ =0x00000964
	add r2, r2, r8
	strh r1, [r2]
	mov r1, r9
	ldrh r0, [r1]
	ldrh r1, [r2]
	ldr r3, _08116250  @ =gUnknown_03002B90
	ldrh r2, [r3]
	ldrb r3, [r4]
	ldr r6, _08116264  @ =gUnknown_0817ED7A
	add r6, r7, r6
	ldr r5, _08116268  @ =gUnknown_03003954
	ldrb r4, [r5]
	mov r5, #4
	orr r4, r4, r5
	ldrb r5, [r6]
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #0
	str r4, [sp]
	bl sub_080C6368
	mov r5, r9
	ldrh r0, [r5]
	add r0, r0, #1
	strh r0, [r5]
_08116210:
	add r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r1, r10
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0811619C
_08116224:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08116234:
	.4byte gRam
_08116238:
	.4byte 0x0000096C
_0811623C:
	.4byte 0x00000E29
_08116240:
	.4byte gUnknown_03003E74
_08116244:
	.4byte gUnknown_0817ED6A
_08116248:
	.4byte gUnknown_0817ED2A
_0811624C:
	.4byte 0x00000958
_08116250:
	.4byte gUnknown_03002B90
_08116254:
	.4byte 0x000016C4
_08116258:
	.4byte gUnknown_0817ED4A
_0811625C:
	.4byte 0x00000952
_08116260:
	.4byte 0x00000964
_08116264:
	.4byte gUnknown_0817ED7A
_08116268:
	.4byte gUnknown_03003954
	THUMB_FUNC_END sub_0811610C

