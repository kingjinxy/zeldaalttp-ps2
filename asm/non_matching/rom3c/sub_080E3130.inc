	THUMB_FUNC_START sub_080E3130
sub_080E3130: @ 0x080E3130
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #24
	lsl r0, r0, #24
	lsr r0, r0, #24
	str r0, [sp, #4]
	ldr r2, _080E31E0  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r0, r2, r1
	ldrb r1, [r0]
	ldr r3, _080E31E4  @ =0x000015E8
	add r0, r2, r3
	strb r1, [r0]
	ldr r4, _080E31E8  @ =0x00000964
	add r0, r2, r4
	ldrb r1, [r0]
	ldr r7, _080E31EC  @ =0x000015E9
	add r0, r2, r7
	strb r1, [r0]
	ldr r1, _080E31F0  @ =0x00000F62
	add r0, r2, r1
	ldr r3, [sp, #4]
	add r0, r3, r0
	ldrb r3, [r0]
	ldr r4, _080E31F4  @ =0x00000F72
	add r0, r2, r4
	ldr r7, [sp, #4]
	add r0, r7, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r3, r3, r0
	mov r7, #0
	sub r1, r1, #16
	add r0, r2, r1
	ldr r4, [sp, #4]
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #1
	bls _080E3194
	ldr r0, _080E31F8  @ =gUnknown_081770E0
	ldr r7, _080E31FC  @ =0x00000FE2
	add r1, r2, r7
	add r1, r4, r1
	ldrb r1, [r1]
	add r1, r1, r0
	ldrb r7, [r1]
_080E3194:
	ldr r1, _080E3200  @ =gUnknown_08177100
	ldr r4, _080E3204  @ =0x00000FB2
	add r0, r2, r4
	ldr r2, [sp, #4]
	add r0, r2, r0
	ldrb r0, [r0]
	add r1, r0, r1
	ldrb r1, [r1]
	str r1, [sp, #8]
	ldr r1, _080E3208  @ =gUnknown_08177104
	add r0, r0, r1
	ldrb r0, [r0]
	str r0, [sp, #12]
	add r5, r3, #0
	add r5, r5, #128
	ldr r4, _080E320C  @ =0x000001FF
	add r0, r4, #0
	and r5, r5, r0
	ldr r1, _080E3210  @ =gUnknown_08173F38
	mov r6, #255
	add r0, r3, #0
	and r0, r0, r6
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r2, [r0]
	add r0, r5, #0
	and r0, r0, r6
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r4, [r0]
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r2
	cmp r0, #0
	beq _080E3214
	str r7, [sp, #16]
	b _080E322C
	.byte 0x00
	.byte 0x00
_080E31E0:
	.4byte gRam
_080E31E4:
	.4byte 0x000015E8
_080E31E8:
	.4byte 0x00000964
_080E31EC:
	.4byte 0x000015E9
_080E31F0:
	.4byte 0x00000F62
_080E31F4:
	.4byte 0x00000F72
_080E31F8:
	.4byte gUnknown_081770E0
_080E31FC:
	.4byte 0x00000FE2
_080E3200:
	.4byte gUnknown_08177100
_080E3204:
	.4byte 0x00000FB2
_080E3208:
	.4byte gUnknown_08177104
_080E320C:
	.4byte 0x000001FF
_080E3210:
	.4byte gUnknown_08173F38
_080E3214:
	and r2, r2, r6
	add r0, r2, #0
	mul r0, r7, r0
	lsl r0, r0, #16
	lsr r1, r0, #24
	lsr r0, r0, #23
	mov r2, #1
	and r0, r0, r2
	add r1, r1, r0
	lsl r1, r1, #24
	lsr r1, r1, #24
	str r1, [sp, #16]
_080E322C:
	ldr r0, [sp, #16]
	mov r10, r0
	mov r0, #128
	lsl r0, r0, #1
	and r3, r3, r0
	cmp r3, #0
	beq _080E3244
	mov r1, r10
	neg r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r10, r0
_080E3244:
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r4
	cmp r0, #0
	beq _080E3252
	mov r9, r7
	b _080E326C
_080E3252:
	mov r0, #255
	and r4, r4, r0
	add r0, r4, #0
	mul r0, r7, r0
	lsl r0, r0, #16
	lsr r1, r0, #24
	lsr r0, r0, #23
	mov r2, #1
	and r0, r0, r2
	add r1, r1, r0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r9, r1
_080E326C:
	mov r7, r9
	mov r0, #128
	lsl r0, r0, #1
	and r5, r5, r0
	cmp r5, #0
	beq _080E3280
	mov r2, r9
	neg r0, r2
	lsl r0, r0, #24
	lsr r7, r0, #24
_080E3280:
	mov r0, r10
	add r0, r0, #252
	ldr r3, [sp, #8]
	add r0, r3, r0
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r5, _080E3388  @ =gRam
	ldr r4, _080E338C  @ =0x000015ED
	add r0, r5, r4
	strb r1, [r0]
	add r0, r7, #0
	add r0, r0, #252
	ldr r2, [sp, #12]
	add r0, r2, r0
	lsl r0, r0, #24
	lsr r3, r0, #24
	sub r4, r4, #1
	add r0, r5, r4
	strb r3, [r0]
	ldr r0, _080E3390  @ =gUnknown_03003E74
	ldrh r0, [r0]
	sub r4, r4, #4
	add r2, r5, r4
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrb r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080E3394  @ =0x000015E9
	add r6, r5, r2
	lsl r2, r3, #24
	asr r2, r2, #24
	ldrb r3, [r6]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080E3398  @ =0x00002D4A
	mov r4, #2
	str r4, [sp]
	bl sub_080C6004
	mov r2, #3
	mov r4, #1
	mov r8, r4
	mov r0, #128
	and r7, r7, r0
	lsl r0, r7, #24
	lsr r0, r0, #24
	str r0, [sp, #20]
_080E32E4:
	ldr r1, _080E339C  @ =gUnknown_08177108
	lsl r0, r2, #24
	asr r4, r0, #24
	add r1, r4, r1
	ldrb r2, [r1]
	ldr r1, [sp, #16]
	add r0, r1, #0
	mul r0, r2, r0
	asr r0, r0, #8
	lsl r0, r0, #24
	lsr r1, r0, #24
	mov r0, r10
	mov r3, #128
	and r0, r0, r3
	cmp r0, #0
	beq _080E330A
	lsl r0, r1, #24
	neg r0, r0
	lsr r1, r0, #24
_080E330A:
	mov r0, r9
	mul r0, r2, r0
	asr r0, r0, #8
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r7, [sp, #20]
	cmp r7, #0
	beq _080E3320
	lsl r0, r3, #24
	neg r0, r0
	lsr r3, r0, #24
_080E3320:
	ldr r0, _080E3390  @ =gUnknown_03003E74
	ldrh r0, [r0]
	add r0, r0, r8
	lsl r0, r0, #16
	lsr r0, r0, #16
	lsl r1, r1, #24
	ldr r7, _080E33A0  @ =0x000015E8
	add r2, r5, r7
	asr r1, r1, #24
	ldrb r2, [r2]
	add r1, r1, r2
	ldr r2, [sp, #8]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	lsl r2, r3, #24
	asr r2, r2, #24
	ldrb r3, [r6]
	add r2, r2, r3
	ldr r7, [sp, #12]
	add r2, r2, r7
	lsl r2, r2, #16
	lsr r2, r2, #16
	mov r3, #0
	str r3, [sp]
	ldr r3, _080E33A4  @ =0x00002D6F
	bl sub_080C6004
	sub r1, r4, #1
	lsl r1, r1, #24
	mov r0, r8
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	lsr r2, r1, #24
	cmp r1, #0
	bge _080E32E4
	ldr r0, [sp, #4]
	mov r1, #255
	mov r2, #4
	bl sub_080C6350
	add sp, sp, #24
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E3388:
	.4byte gRam
_080E338C:
	.4byte 0x000015ED
_080E3390:
	.4byte gUnknown_03003E74
_080E3394:
	.4byte 0x000015E9
_080E3398:
	.4byte 0x00002D4A
_080E339C:
	.4byte gUnknown_08177108
_080E33A0:
	.4byte 0x000015E8
_080E33A4:
	.4byte 0x00002D6F
	THUMB_FUNC_END sub_080E3130

