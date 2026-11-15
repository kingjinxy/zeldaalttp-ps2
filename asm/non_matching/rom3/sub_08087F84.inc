	THUMB_FUNC_START sub_08087F84
sub_08087F84: @ 0x08087F84
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	ldr r0, _08088058  @ =gUnknown_02000400
	ldrh r0, [r0]
	mov r9, r0
	ldr r4, _0808805C  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r0, r4, r1
	ldrh r2, [r0]
	mov r1, #252
	lsl r1, r1, #1
	add r0, r1, #0
	and r0, r0, r2
	lsl r0, r0, #3
	ldr r2, _08088060  @ =0x0000096C
	add r7, r4, r2
	ldr r3, _08088064  @ =0x00000964
	add r2, r4, r3
	ldrh r2, [r2]
	and r1, r1, r2
	lsr r1, r1, #3
	orr r0, r0, r1
	lsl r0, r0, #1
	strh r0, [r7]
	mov r0, r9
	lsl r0, r0, #1
	mov r8, r0
	ldr r0, _08088068  @ =gUnknown_02000406
	add r0, r0, r8
	ldr r1, _0808806C  @ =0x0000610F
	add r5, r1, #0
	strh r5, [r0]
	ldr r0, _08088070  @ =gUnknown_0200040C
	add r0, r0, r8
	strh r5, [r0]
	mov r2, #0
	ldrsh r0, [r7, r2]
	bl sub_08080380
	asr r3, r0, #1
	lsl r0, r3, #1
	ldr r6, _08088074  @ =gUnknown_02018000
	add r0, r0, r6
	strh r5, [r0]
	mov r3, #0
	ldrsh r0, [r7, r3]
	add r0, r0, #128
	bl sub_08080380
	asr r3, r0, #1
	lsl r0, r3, #1
	add r0, r0, r6
	strh r5, [r0]
	ldr r0, _08088078  @ =gUnknown_02002F4F
	ldrb r1, [r0]
	mov r0, #151
	lsl r0, r0, #4
	add r2, r4, r0
	strb r1, [r2]
	ldr r3, _0808807C  @ =0x00000971
	add r4, r4, r3
	strb r1, [r4]
	ldrh r0, [r7]
	lsl r0, r0, #16
	asr r3, r0, #17
	ldr r4, _08088080  @ =gUnknown_0200CBA0
	add r0, r3, r4
	strb r1, [r0]
	ldr r0, _08088084  @ =gUnknown_0200CBE0
	add r1, r3, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldrh r1, [r7]
	mov r0, #128
	lsl r0, r0, #6
	and r0, r0, r1
	cmp r0, #0
	beq _08088098
	ldr r4, _08088088  @ =0x00001FFF
	add r0, r4, #0
	and r0, r0, r1
	bl sub_08080380
	add r2, r0, #0
	ldr r1, _0808808C  @ =gUnknown_02000402
	add r1, r1, r8
	ldr r3, _08088090  @ =0xFFFFA000
	add r5, r3, #0
	add r0, r2, r5
	strh r0, [r1]
	ldrh r0, [r7]
	and r4, r4, r0
	add r4, r4, #128
	add r0, r4, #0
	bl sub_08080380
	add r2, r0, #0
	ldr r0, _08088094  @ =gUnknown_02000408
	add r0, r0, r8
	add r5, r2, r5
	strh r5, [r0]
	b _080880C2
	.byte 0x00
	.byte 0x00
_08088058:
	.4byte gUnknown_02000400
_0808805C:
	.4byte gRam
_08088060:
	.4byte 0x0000096C
_08088064:
	.4byte 0x00000964
_08088068:
	.4byte gUnknown_02000406
_0808806C:
	.4byte 0x0000610F
_08088070:
	.4byte gUnknown_0200040C
_08088074:
	.4byte gUnknown_02018000
_08088078:
	.4byte gUnknown_02002F4F
_0808807C:
	.4byte 0x00000971
_08088080:
	.4byte gUnknown_0200CBA0
_08088084:
	.4byte gUnknown_0200CBE0
_08088088:
	.4byte 0x00001FFF
_0808808C:
	.4byte gUnknown_02000402
_08088090:
	.4byte 0xFFFFA000
_08088094:
	.4byte gUnknown_02000408
_08088098:
	mov r4, #0
	ldrsh r0, [r7, r4]
	bl sub_08080380
	add r2, r0, #0
	ldr r1, _08088104  @ =gUnknown_02000402
	add r1, r1, r8
	ldr r0, _08088108  @ =0xFFFFC000
	add r4, r0, #0
	add r0, r2, r4
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r7, r1]
	add r0, r0, #128
	bl sub_08080380
	add r2, r0, #0
	ldr r0, _0808810C  @ =gUnknown_02000408
	add r0, r0, r8
	add r4, r2, r4
	strh r4, [r0]
_080880C2:
	mov r2, r9
	lsl r1, r2, #1
	ldr r3, _08088110  @ =gUnknown_02000404
	add r0, r1, r3
	mov r2, #1
	strh r2, [r0]
	ldr r4, _08088114  @ =gUnknown_0200040A
	add r0, r1, r4
	strh r2, [r0]
	ldr r0, _08088118  @ =gUnknown_0200040E
	add r1, r1, r0
	ldr r2, _0808811C  @ =0x0000FFFF
	add r0, r2, #0
	strh r0, [r1]
	ldr r1, _08088120  @ =gUnknown_02000400
	mov r0, r9
	add r0, r0, #6
	strh r0, [r1]
	ldr r1, _08088124  @ =gRam
	ldr r3, _08088128  @ =0x00000AA8
	add r1, r1, r3
	ldrh r2, [r1]
	mov r4, #128
	lsl r4, r4, #5
	add r0, r4, #0
	orr r0, r0, r2
	strh r0, [r1]
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_08088104:
	.4byte gUnknown_02000402
_08088108:
	.4byte 0xFFFFC000
_0808810C:
	.4byte gUnknown_02000408
_08088110:
	.4byte gUnknown_02000404
_08088114:
	.4byte gUnknown_0200040A
_08088118:
	.4byte gUnknown_0200040E
_0808811C:
	.4byte 0x0000FFFF
_08088120:
	.4byte gUnknown_02000400
_08088124:
	.4byte gRam
_08088128:
	.4byte 0x00000AA8
	THUMB_FUNC_END sub_08087F84

