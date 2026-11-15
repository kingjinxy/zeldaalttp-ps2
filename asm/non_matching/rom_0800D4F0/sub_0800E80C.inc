	THUMB_FUNC_START sub_0800E80C
sub_0800E80C: @ 0x0800E80C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	add r7, r0, #0
	lsl r2, r2, #16
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r8, r3
	add r4, r7, #0
	lsr r0, r2, #16
	mov r12, r0
	asr r2, r2, #10
	add r2, r2, #64
	add r3, r4, r2
	mov r2, r8
	strh r2, [r4]
	add r4, r4, #2
	mov r5, #128
	lsl r5, r5, #4
	mov r9, r5
	mov r0, r8
	mov r6, r9
	orr r0, r0, r6
	strh r0, [r3]
	add r3, r3, #2
	lsl r1, r1, #16
	asr r1, r1, #16
	cmp r1, #0
	ble _0800E8B2
	mov r2, r8
	add r2, r2, #1
	strh r2, [r4]
	add r4, r4, #2
	add r0, r2, #0
	orr r0, r0, r6
	strh r0, [r3]
	add r3, r3, #2
	sub r0, r1, #2
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r1, r0, #0
	lsl r0, r1, #16
	ldr r5, _0800E94C  @ =0xFFFF0000
	add r0, r0, r5
	lsr r0, r0, #16
	lsl r1, r1, #16
	add r6, r2, #0
	cmp r1, #0
	ble _0800E898
	mov r1, #2
	add r1, r1, r8
	mov r10, r1
	mov r2, r10
	mov r5, r9
	orr r2, r2, r5
_0800E87E:
	mov r1, r10
	strh r1, [r4]
	add r4, r4, #2
	strh r2, [r3]
	add r3, r3, #2
	add r1, r0, #0
	lsl r0, r1, #16
	ldr r5, _0800E94C  @ =0xFFFF0000
	add r0, r0, r5
	lsr r0, r0, #16
	lsl r1, r1, #16
	cmp r1, #0
	bgt _0800E87E
_0800E898:
	mov r1, #128
	lsl r1, r1, #3
	add r0, r1, #0
	add r1, r6, #0
	orr r1, r1, r0
	strh r1, [r4]
	add r4, r4, #2
	mov r2, #192
	lsl r2, r2, #4
	add r0, r2, #0
	orr r6, r6, r0
	strh r6, [r3]
	add r3, r3, #2
_0800E8B2:
	mov r5, #128
	lsl r5, r5, #3
	add r6, r5, #0
	mov r0, r8
	orr r0, r0, r6
	strh r0, [r4]
	mov r0, #192
	lsl r0, r0, #4
	add r1, r0, #0
	mov r0, r8
	orr r0, r0, r1
	strh r0, [r3]
	add r7, r7, #64
	add r4, r4, #64
	mov r1, r12
	lsl r0, r1, #16
	asr r1, r0, #16
	cmp r1, #0
	ble _0800E93C
	mov r2, r8
	add r2, r2, #3
	strh r2, [r7]
	add r0, r2, #0
	orr r0, r0, r6
	strh r0, [r4]
	add r7, r7, #64
	add r4, r4, #64
	sub r0, r1, #2
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r12, r0
	mov r1, r12
	lsl r0, r1, #16
	ldr r3, _0800E94C  @ =0xFFFF0000
	add r0, r0, r3
	lsr r0, r0, #16
	mov r12, r0
	lsl r1, r1, #16
	add r5, r2, #0
	cmp r1, #0
	ble _0800E926
	mov r3, r8
	add r3, r3, #4
	add r2, r3, #0
	orr r2, r2, r6
_0800E90C:
	strh r3, [r7]
	strh r2, [r4]
	add r7, r7, #64
	add r4, r4, #64
	mov r1, r12
	lsl r0, r1, #16
	ldr r6, _0800E94C  @ =0xFFFF0000
	add r0, r0, r6
	lsr r0, r0, #16
	mov r12, r0
	lsl r1, r1, #16
	cmp r1, #0
	bgt _0800E90C
_0800E926:
	mov r1, #128
	lsl r1, r1, #4
	add r0, r1, #0
	add r1, r5, #0
	orr r1, r1, r0
	strh r1, [r7]
	mov r2, #192
	lsl r2, r2, #4
	add r0, r2, #0
	orr r5, r5, r0
	strh r5, [r4]
_0800E93C:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0800E94C:
	.4byte 0xFFFF0000
	THUMB_FUNC_END sub_0800E80C

