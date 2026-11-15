	THUMB_FUNC_START sub_0809FD78
sub_0809FD78: @ 0x0809FD78
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r5, _0809FE40  @ =gRam
	ldr r0, _0809FE44  @ =0x00001714
	add r1, r5, r0
	mov r0, #0
	strb r0, [r1]
	bl sub_0809E970
	sub r4, r4, #1
	lsl r4, r4, #19
	lsr r2, r4, #16
	ldr r1, _0809FE48  @ =0x000016C4
	add r1, r1, r5
	mov r8, r1
	mov r3, #0
	ldrsh r0, [r1, r3]
	ldr r3, _0809FE4C  @ =gUnknown_081682EE
	add r4, r2, #0
	add r1, r4, r3
	mov r6, #0
	ldrsh r1, [r1, r6]
	add r0, r0, r1
	ldr r7, _0809FE50  @ =0x00000A0E
	add r6, r5, r7
	ldrh r1, [r6]
	and r0, r0, r1
	asr r0, r0, #3
	ldr r1, _0809FE54  @ =0x00000964
	add r1, r1, r5
	mov r10, r1
	strh r0, [r1]
	mov r7, r8
	mov r1, #0
	ldrsh r0, [r7, r1]
	add r2, r2, #2
	add r3, r2, r3
	mov r7, #0
	ldrsh r1, [r3, r7]
	add r0, r0, r1
	ldrh r1, [r6]
	and r0, r0, r1
	asr r0, r0, #3
	ldr r1, _0809FE58  @ =0x00000968
	add r1, r1, r5
	mov r9, r1
	strh r0, [r1]
	mov r3, #182
	lsl r3, r3, #5
	add r0, r5, r3
	ldr r7, _0809FE5C  @ =gUnknown_081682E6
	mov r8, r7
	add r4, r4, r8
	ldrh r1, [r0]
	ldrh r0, [r4]
	add r0, r1, r0
	ldrh r3, [r6]
	and r0, r0, r3
	mov r4, #150
	lsl r4, r4, #4
	add r6, r5, r4
	strh r0, [r6]
	add r2, r2, r8
	ldrh r0, [r2]
	add r1, r1, r0
	and r1, r1, r3
	mov r7, #151
	lsl r7, r7, #4
	add r4, r5, r7
	strh r1, [r4]
	ldr r0, _0809FE60  @ =0x00000974
	add r5, r5, r0
	mov r0, #1
	strh r0, [r5]
	bl sub_080A0454
	mov r1, r9
	ldrh r0, [r1]
	mov r3, r10
	strh r0, [r3]
	ldrh r0, [r4]
	strh r0, [r6]
	mov r0, #2
	strh r0, [r5]
	bl sub_080A0454
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809FE40:
	.4byte gRam
_0809FE44:
	.4byte 0x00001714
_0809FE48:
	.4byte 0x000016C4
_0809FE4C:
	.4byte gUnknown_081682EE
_0809FE50:
	.4byte 0x00000A0E
_0809FE54:
	.4byte 0x00000964
_0809FE58:
	.4byte 0x00000968
_0809FE5C:
	.4byte gUnknown_081682E6
_0809FE60:
	.4byte 0x00000974
	THUMB_FUNC_END sub_0809FD78

