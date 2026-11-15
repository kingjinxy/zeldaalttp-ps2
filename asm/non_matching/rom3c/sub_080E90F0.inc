	THUMB_FUNC_START sub_080E90F0
sub_080E90F0: @ 0x080E90F0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080E91AC  @ =gUnknown_08177AB0
	ldr r6, _080E91B0  @ =gRam
	ldr r2, _080E91B4  @ =0x00000996
	add r1, r6, r2
	ldrb r1, [r1]
	lsr r1, r1, #2
	mov r2, #3
	and r1, r1, r2
	add r1, r1, r3
	ldrb r1, [r1]
	lsr r1, r1, #3
	lsl r1, r1, #3
	ldr r2, _080E91B8  @ =gUnknown_08177A80
	add r1, r1, r2
	mov r2, #2
	bl sub_080C9480
	ldr r0, _080E91BC  @ =gUnknown_03003E74
	mov r10, r0
	ldrh r0, [r0]
	lsl r0, r0, #3
	mov r2, #170
	lsl r2, r2, #3
	add r1, r6, r2
	add r7, r0, r1
	ldrb r1, [r7, #3]
	mov r0, #17
	neg r0, r0
	and r0, r0, r1
	mov r1, #33
	neg r1, r1
	mov r9, r1
	and r0, r0, r1
	strb r0, [r7, #3]
	ldrb r1, [r7, #5]
	mov r3, #15
	add r0, r3, #0
	and r0, r0, r1
	mov r2, #32
	mov r8, r2
	mov r1, r8
	orr r0, r0, r1
	strb r0, [r7, #5]
	ldrh r5, [r7, #4]
	lsl r0, r5, #22
	lsr r0, r0, #22
	mov r4, #255
	add r1, r4, #0
	and r1, r1, r0
	ldr r2, _080E91C0  @ =0xFFFFFC00
	add r0, r2, #0
	and r0, r0, r5
	orr r0, r0, r1
	strh r0, [r7, #4]
	mov r1, r10
	ldrh r0, [r1]
	lsl r0, r0, #3
	mov r1, #171
	lsl r1, r1, #3
	add r6, r6, r1
	add r7, r0, r6
	ldrb r0, [r7, #3]
	mov r1, #16
	orr r0, r0, r1
	mov r1, r9
	and r0, r0, r1
	strb r0, [r7, #3]
	ldrb r0, [r7, #5]
	and r3, r3, r0
	mov r0, r8
	orr r3, r3, r0
	strb r3, [r7, #5]
	ldrh r1, [r7, #4]
	lsl r0, r1, #22
	lsr r0, r0, #22
	and r4, r4, r0
	and r2, r2, r1
	orr r2, r2, r4
	strh r2, [r7, #4]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E91AC:
	.4byte gUnknown_08177AB0
_080E91B0:
	.4byte gRam
_080E91B4:
	.4byte 0x00000996
_080E91B8:
	.4byte gUnknown_08177A80
_080E91BC:
	.4byte gUnknown_03003E74
_080E91C0:
	.4byte 0xFFFFFC00
	THUMB_FUNC_END sub_080E90F0

