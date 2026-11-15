	THUMB_FUNC_START sub_08078640
sub_08078640: @ 0x08078640
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	ldr r3, _080786E8  @ =gRam
	mov r1, #182
	lsl r1, r1, #5
	add r0, r3, r1
	ldrh r1, [r0]
	add r1, r1, #12
	mov r2, #150
	lsl r2, r2, #4
	add r0, r3, r2
	strh r1, [r0]
	ldr r7, _080786EC  @ =0x00000C88
	add r0, r3, r7
	ldrh r0, [r0]
	sub r1, r1, r0
	ldr r2, _080786F0  @ =0x00000C8A
	add r0, r3, r2
	ldrh r6, [r0]
	and r1, r1, r6
	lsl r1, r1, #16
	asr r1, r1, #16
	mov r7, #248
	mov r8, r7
	add r2, r1, #0
	mov r0, r8
	and r2, r2, r0
	lsl r2, r2, #2
	ldr r7, _080786F4  @ =0x0000096C
	add r7, r7, r3
	mov r9, r7
	mov r5, #128
	lsl r5, r5, #2
	add r0, r1, #0
	and r0, r0, r5
	lsl r0, r0, #4
	orr r2, r2, r0
	mov r4, #128
	lsl r4, r4, #1
	and r1, r1, r4
	lsl r1, r1, #3
	orr r2, r2, r1
	ldr r1, _080786F8  @ =0x000016C4
	add r0, r3, r1
	ldrh r0, [r0]
	add r0, r0, #8
	ldr r7, _080786FC  @ =0x00000964
	add r1, r3, r7
	strh r0, [r1]
	ldr r1, _08078700  @ =0x00000C8C
	add r3, r3, r1
	ldrh r1, [r3]
	sub r0, r0, r1
	and r0, r0, r6
	lsl r0, r0, #16
	asr r0, r0, #16
	add r1, r0, #0
	mov r3, r8
	and r1, r1, r3
	lsr r1, r1, #3
	orr r2, r2, r1
	add r1, r0, #0
	and r1, r1, r5
	lsl r1, r1, #3
	orr r2, r2, r1
	and r0, r0, r4
	lsl r0, r0, #2
	orr r2, r2, r0
	mov r7, r9
	strh r2, [r7]
	mov r1, #0
	ldrsh r0, [r7, r1]
	lsl r0, r0, #1
	ldr r2, _08078704  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r1}
	bx r1
_080786E8:
	.4byte gRam
_080786EC:
	.4byte 0x00000C88
_080786F0:
	.4byte 0x00000C8A
_080786F4:
	.4byte 0x0000096C
_080786F8:
	.4byte 0x000016C4
_080786FC:
	.4byte 0x00000964
_08078700:
	.4byte 0x00000C8C
_08078704:
	.4byte gUnknown_02018000
	THUMB_FUNC_END sub_08078640

