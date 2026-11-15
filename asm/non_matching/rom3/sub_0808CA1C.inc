	THUMB_FUNC_START sub_0808CA1C
sub_0808CA1C: @ 0x0808CA1C
	push {r4-r6,lr}
	mov r6, r10
	mov r5, r9
	mov r4, r8
	push {r4-r6}
	ldr r4, _0808CAE4  @ =gRam
	mov r0, #182
	lsl r0, r0, #5
	add r2, r4, r0
	ldr r1, _0808CAE8  @ =gUnknown_08168258
	ldr r3, _0808CAEC  @ =0x000016D5
	add r0, r4, r3
	ldrb r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r1, r0, r1
	ldrh r1, [r1]
	ldrh r2, [r2]
	add r1, r1, r2
	mov r2, #16
	neg r2, r2
	add r5, r2, #0
	and r1, r1, r5
	ldr r3, _0808CAF0  @ =0x00000964
	add r2, r4, r3
	strh r1, [r2]
	ldr r2, _0808CAF4  @ =0x000016C4
	add r3, r4, r2
	ldr r2, _0808CAF8  @ =gUnknown_08168260
	add r0, r0, r2
	ldrh r2, [r0]
	ldrh r3, [r3]
	add r2, r2, r3
	and r2, r2, r5
	mov r3, #150
	lsl r3, r3, #4
	add r0, r4, r3
	strh r2, [r0]
	ldr r3, _0808CAFC  @ =0x00000C88
	add r0, r4, r3
	ldrh r0, [r0]
	sub r1, r1, r0
	add r3, r3, #2
	add r0, r4, r3
	ldrh r0, [r0]
	mov r8, r0
	mov r0, r8
	and r1, r1, r0
	lsl r1, r1, #16
	asr r1, r1, #16
	mov r3, #240
	mov r9, r3
	add r3, r1, #0
	mov r0, r9
	and r3, r3, r0
	lsl r3, r3, #2
	ldr r0, _0808CB00  @ =0x0000096C
	add r0, r0, r4
	mov r10, r0
	mov r6, #128
	lsl r6, r6, #2
	add r0, r1, #0
	and r0, r0, r6
	lsl r0, r0, #4
	orr r3, r3, r0
	mov r5, #128
	lsl r5, r5, #1
	and r1, r1, r5
	lsl r1, r1, #3
	orr r3, r3, r1
	ldr r1, _0808CB04  @ =0x00000C8C
	add r4, r4, r1
	ldrh r0, [r4]
	sub r2, r2, r0
	mov r0, r8
	and r2, r2, r0
	lsl r2, r2, #16
	asr r2, r2, #16
	add r0, r2, #0
	mov r1, r9
	and r0, r0, r1
	lsr r0, r0, #3
	orr r3, r3, r0
	add r0, r2, #0
	and r0, r0, r6
	lsl r0, r0, #3
	orr r3, r3, r0
	and r2, r2, r5
	lsl r2, r2, #2
	orr r3, r3, r2
	mov r2, r10
	strh r3, [r2]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808CAE4:
	.4byte gRam
_0808CAE8:
	.4byte gUnknown_08168258
_0808CAEC:
	.4byte 0x000016D5
_0808CAF0:
	.4byte 0x00000964
_0808CAF4:
	.4byte 0x000016C4
_0808CAF8:
	.4byte gUnknown_08168260
_0808CAFC:
	.4byte 0x00000C88
_0808CB00:
	.4byte 0x0000096C
_0808CB04:
	.4byte 0x00000C8C
	THUMB_FUNC_END sub_0808CA1C

