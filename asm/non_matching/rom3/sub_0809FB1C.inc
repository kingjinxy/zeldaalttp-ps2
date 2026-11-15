	THUMB_FUNC_START sub_0809FB1C
sub_0809FB1C: @ 0x0809FB1C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r1, _0809FB58  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r0, r1, r2
	ldrb r0, [r0]
	mov r10, r0
	ldr r3, _0809FB5C  @ =0x00001726
	add r0, r1, r3
	ldrb r2, [r0]
	mov r0, #2
	and r0, r0, r2
	mov r8, r1
	cmp r0, #0
	beq _0809FB60
	mov r4, #2
	mov r0, #182
	lsl r0, r0, #5
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	mvn r0, r0
	asr r0, r0, #31
	and r4, r4, r0
	b _0809FB72
_0809FB58:
	.4byte gRam
_0809FB5C:
	.4byte 0x00001726
_0809FB60:
	mov r4, #6
	ldr r0, _0809FC38  @ =0x000016C4
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _0809FB72
	mov r4, #4
_0809FB72:
	mov r5, r8
	ldr r0, _0809FC3C  @ =0x00001714
	add r1, r5, r0
	mov r0, #0
	strb r0, [r1]
	bl sub_0809E970
	mov r1, #182
	lsl r1, r1, #5
	add r1, r1, r5
	mov r9, r1
	ldr r0, _0809FC40  @ =gUnknown_081682D6
	lsr r2, r4, #1
	lsl r2, r2, #1
	add r0, r2, r0
	ldrh r0, [r0]
	ldrh r3, [r1]
	add r0, r0, r3
	ldr r1, _0809FC44  @ =0x00000A0E
	add r3, r5, r1
	ldrh r1, [r3]
	and r0, r0, r1
	mov r1, #150
	lsl r1, r1, #4
	add r6, r5, r1
	strh r0, [r6]
	ldr r0, _0809FC38  @ =0x000016C4
	add r7, r5, r0
	ldr r0, _0809FC48  @ =gUnknown_081682DE
	add r2, r2, r0
	mov r1, #0
	ldrsh r0, [r7, r1]
	ldrh r2, [r2]
	add r0, r0, r2
	ldrh r1, [r3]
	and r0, r0, r1
	asr r0, r0, #3
	ldr r2, _0809FC4C  @ =0x00000964
	add r1, r5, r2
	strh r0, [r1]
	ldr r3, _0809FC50  @ =0x00000974
	add r1, r5, r3
	mov r0, #1
	strh r0, [r1]
	bl sub_080A0454
	mov r0, r10
	strb r0, [r6]
	ldr r1, _0809FC54  @ =0x0000097C
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	mov r2, #192
	lsl r2, r2, #5
	add r1, r5, r2
	ldrb r1, [r1]
	orr r0, r0, r1
	mov r1, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0809FC04
	ldr r3, _0809FC58  @ =0x000017FF
	add r0, r5, r3
	add r2, r2, #2
	add r1, r5, r2
	ldrb r0, [r0]
	ldrb r1, [r1]
	orr r0, r0, r1
	mov r1, #51
	and r0, r0, r1
	cmp r0, #0
	beq _0809FC6C
_0809FC04:
	mov r4, #0
	mov r0, #0
	ldrsb r0, [r6, r0]
	neg r0, r0
	strb r0, [r6]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0809FC16
	mov r4, #255
_0809FC16:
	ldr r0, _0809FC5C  @ =0x00000961
	add r0, r0, r8
	strb r4, [r0]
	ldr r0, _0809FC60  @ =0x00001726
	add r0, r0, r8
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _0809FC64
	mov r3, r9
	ldrh r0, [r3]
	ldrh r6, [r6]
	add r0, r0, r6
	strh r0, [r3]
	b _0809FC6C
	.byte 0x00
	.byte 0x00
_0809FC38:
	.4byte 0x000016C4
_0809FC3C:
	.4byte 0x00001714
_0809FC40:
	.4byte gUnknown_081682D6
_0809FC44:
	.4byte 0x00000A0E
_0809FC48:
	.4byte gUnknown_081682DE
_0809FC4C:
	.4byte 0x00000964
_0809FC50:
	.4byte 0x00000974
_0809FC54:
	.4byte 0x0000097C
_0809FC58:
	.4byte 0x000017FF
_0809FC5C:
	.4byte 0x00000961
_0809FC60:
	.4byte 0x00001726
_0809FC64:
	ldrh r0, [r7]
	ldrh r6, [r6]
	add r0, r0, r6
	strh r0, [r7]
_0809FC6C:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0809FB1C

	.byte 0x00
	.byte 0x00
