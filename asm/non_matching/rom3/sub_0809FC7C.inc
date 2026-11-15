	THUMB_FUNC_START sub_0809FC7C
sub_0809FC7C: @ 0x0809FC7C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r4, _0809FD54  @ =gRam
	ldr r0, _0809FD58  @ =0x00001714
	add r1, r4, r0
	mov r0, #0
	strb r0, [r1]
	bl sub_0809E970
	ldr r1, _0809FD5C  @ =0x000016C4
	add r2, r4, r1
	mov r1, #0
	ldrsh r0, [r2, r1]
	add r0, r0, #2
	ldr r1, _0809FD60  @ =0x00000A0E
	add r3, r4, r1
	ldrh r1, [r3]
	and r0, r0, r1
	asr r0, r0, #3
	ldr r1, _0809FD64  @ =0x00000964
	add r7, r4, r1
	strh r0, [r7]
	mov r1, #0
	ldrsh r0, [r2, r1]
	add r0, r0, #13
	ldrh r1, [r3]
	and r0, r0, r1
	asr r0, r0, #3
	ldr r2, _0809FD68  @ =0x00000968
	add r2, r2, r4
	mov r10, r2
	strh r0, [r2]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r4, r1
	ldrh r2, [r0]
	add r0, r2, #0
	add r0, r0, #10
	ldrh r3, [r3]
	and r0, r0, r3
	mov r1, #150
	lsl r1, r1, #4
	add r6, r4, r1
	strh r0, [r6]
	ldr r1, _0809FD6C  @ =0x00001734
	add r1, r1, r4
	mov r9, r1
	strb r0, [r1]
	ldr r0, _0809FD70  @ =0x00001735
	add r0, r0, r4
	mov r8, r0
	mov r1, #0
	ldrsh r0, [r6, r1]
	mov r1, #255
	lsl r1, r1, #8
	and r0, r0, r1
	asr r0, r0, #8
	mov r1, r8
	strb r0, [r1]
	add r2, r2, #21
	and r2, r2, r3
	mov r0, #151
	lsl r0, r0, #4
	add r5, r4, r0
	strh r2, [r5]
	ldr r1, _0809FD74  @ =0x00000974
	add r4, r4, r1
	mov r0, #8
	strh r0, [r4]
	bl sub_080A0454
	ldrh r0, [r5]
	strh r0, [r6]
	mov r0, #2
	strh r0, [r4]
	bl sub_080A0454
	mov r2, r9
	ldrb r1, [r2]
	mov r2, r8
	ldrb r0, [r2]
	lsl r0, r0, #8
	add r1, r1, r0
	strh r1, [r6]
	mov r1, r10
	ldrh r0, [r1]
	strh r0, [r7]
	mov r0, #4
	strh r0, [r4]
	bl sub_080A0454
	ldrh r0, [r5]
	strh r0, [r6]
	mov r0, #1
	strh r0, [r4]
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
_0809FD54:
	.4byte gRam
_0809FD58:
	.4byte 0x00001714
_0809FD5C:
	.4byte 0x000016C4
_0809FD60:
	.4byte 0x00000A0E
_0809FD64:
	.4byte 0x00000964
_0809FD68:
	.4byte 0x00000968
_0809FD6C:
	.4byte 0x00001734
_0809FD70:
	.4byte 0x00001735
_0809FD74:
	.4byte 0x00000974
	THUMB_FUNC_END sub_0809FC7C

