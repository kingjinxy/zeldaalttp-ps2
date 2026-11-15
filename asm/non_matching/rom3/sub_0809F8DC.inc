	THUMB_FUNC_START sub_0809F8DC
sub_0809F8DC: @ 0x0809F8DC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r4, _0809F98C  @ =gRam
	ldr r1, _0809F990  @ =0x00001733
	add r0, r4, r1
	ldrb r2, [r0]
	ldr r5, _0809F994  @ =0x00000968
	add r5, r5, r4
	mov r9, r5
	ldr r3, _0809F998  @ =gUnknown_081682B6
	lsr r5, r2, #1
	lsl r5, r5, #1
	add r0, r5, r3
	mov r6, r9
	ldrh r1, [r6]
	ldrh r0, [r0]
	add r0, r1, r0
	ldr r7, _0809F99C  @ =0x00000A0E
	add r7, r7, r4
	mov r8, r7
	ldrh r6, [r7]
	and r0, r0, r6
	mov r7, #150
	lsl r7, r7, #4
	add r7, r7, r4
	mov r10, r7
	strh r0, [r7]
	add r2, r2, #2
	asr r2, r2, #1
	lsl r2, r2, #1
	add r3, r2, r3
	ldrh r0, [r3]
	add r1, r1, r0
	and r1, r1, r6
	mov r0, r9
	strh r1, [r0]
	mov r1, #151
	lsl r1, r1, #4
	add r6, r4, r1
	ldr r3, _0809F9A0  @ =gUnknown_081682C6
	add r5, r5, r3
	mov r7, #0
	ldrsh r0, [r6, r7]
	ldrh r5, [r5]
	add r0, r0, r5
	mov r5, r8
	ldrh r1, [r5]
	and r0, r0, r1
	asr r0, r0, #3
	ldr r7, _0809F9A4  @ =0x00000964
	add r5, r4, r7
	strh r0, [r5]
	add r2, r2, r3
	mov r1, #0
	ldrsh r0, [r6, r1]
	ldrh r2, [r2]
	add r0, r0, r2
	mov r2, r8
	ldrh r1, [r2]
	and r0, r0, r1
	asr r0, r0, #3
	strh r0, [r6]
	add r7, r7, #16
	add r4, r4, r7
	mov r0, #1
	strh r0, [r4]
	bl sub_080A0454
	mov r1, r9
	ldrh r0, [r1]
	mov r2, r10
	strh r0, [r2]
	ldrh r0, [r6]
	strh r0, [r5]
	mov r0, #2
	strh r0, [r4]
	bl sub_080A0454
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0809F98C:
	.4byte gRam
_0809F990:
	.4byte 0x00001733
_0809F994:
	.4byte 0x00000968
_0809F998:
	.4byte gUnknown_081682B6
_0809F99C:
	.4byte 0x00000A0E
_0809F9A0:
	.4byte gUnknown_081682C6
_0809F9A4:
	.4byte 0x00000964
	THUMB_FUNC_END sub_0809F8DC

