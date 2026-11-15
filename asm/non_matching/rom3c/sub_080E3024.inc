	THUMB_FUNC_START sub_080E3024
sub_080E3024: @ 0x080E3024
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	ldr r4, _080E3100  @ =gRam
	ldr r3, _080E3104  @ =0x00000F92
	add r2, r4, r3
	add r0, r0, r2
	ldrb r2, [r0]
	lsl r0, r2, #1
	add r0, r0, r2
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r10, r0
	ldr r0, _080E3108  @ =gUnknown_08176ED0
	add r0, r2, r0
	lsr r1, r1, #24
	ldrb r0, [r0]
	add r1, r1, r0
	lsr r7, r1, #2
	ldr r0, _080E310C  @ =gUnknown_08176EB8
	add r2, r2, r0
	ldrb r5, [r2]
	mov r8, r5
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r0, #0
	blt _080E30EE
	mov r9, r4
_080E3068:
	mov r6, r10
	add r6, r6, r8
	lsl r6, r6, #24
	lsr r6, r6, #24
	ldr r0, _080E3110  @ =gUnknown_03003E74
	ldrh r0, [r0]
	add r0, r0, r7
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r9
	ldr r1, _080E3114  @ =gUnknown_08176EE8
	lsl r3, r6, #1
	add r1, r3, r1
	ldrh r1, [r1]
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r4, _080E3118  @ =0x00000964
	add r4, r4, r9
	ldr r2, _080E311C  @ =gUnknown_08176F78
	add r3, r3, r2
	ldrh r2, [r3]
	ldrh r4, [r4]
	add r2, r2, r4
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080E3120  @ =gUnknown_08177008
	add r3, r6, r3
	ldrb r3, [r3]
	ldr r4, _080E3124  @ =gUnknown_08177050
	add r4, r6, r4
	ldrb r4, [r4]
	ldr r5, _080E3128  @ =gUnknown_03002B99
	ldrb r5, [r5]
	lsl r5, r5, #24
	asr r5, r5, #24
	orr r4, r4, r5
	lsl r4, r4, #8
	add r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	ldr r4, _080E312C  @ =gUnknown_08177098
	add r6, r6, r4
	ldrb r4, [r6]
	str r4, [sp]
	bl sub_080C6368
	mov r1, r8
	lsl r0, r1, #24
	asr r1, r0, #24
	cmp r1, #2
	bne _080E30DC
	add r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
_080E30DC:
	sub r1, r1, #1
	lsl r1, r1, #24
	add r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	lsr r3, r1, #24
	mov r8, r3
	cmp r1, #0
	bge _080E3068
_080E30EE:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E3100:
	.4byte gRam
_080E3104:
	.4byte 0x00000F92
_080E3108:
	.4byte gUnknown_08176ED0
_080E310C:
	.4byte gUnknown_08176EB8
_080E3110:
	.4byte gUnknown_03003E74
_080E3114:
	.4byte gUnknown_08176EE8
_080E3118:
	.4byte 0x00000964
_080E311C:
	.4byte gUnknown_08176F78
_080E3120:
	.4byte gUnknown_08177008
_080E3124:
	.4byte gUnknown_08177050
_080E3128:
	.4byte gUnknown_03002B99
_080E312C:
	.4byte gUnknown_08177098
	THUMB_FUNC_END sub_080E3024

