	THUMB_FUNC_START sub_0808D254
sub_0808D254: @ 0x0808D254
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r1, _0808D30C  @ =gRam
	ldr r2, _0808D310  @ =0x0000097C
	add r0, r1, r2
	mov r2, #0
	strh r2, [r0]
	mov r3, #151
	lsl r3, r3, #4
	add r0, r1, r3
	strh r2, [r0]
	ldr r5, _0808D314  @ =0x00000A02
	add r4, r1, r5
	mov r0, #3
	strb r0, [r4]
	mov r2, #150
	lsl r2, r2, #4
	add r0, r1, r2
	ldrh r0, [r0]
	sub r0, r0, #20
	mov r3, #8
	neg r3, r3
	add r2, r3, #0
	and r0, r0, r2
	mov r5, #179
	lsl r5, r5, #4
	add r3, r1, r5
	strh r0, [r3]
	ldr r5, _0808D318  @ =0x00000964
	add r0, r1, r5
	ldrh r0, [r0]
	sub r0, r0, #23
	and r0, r0, r2
	ldr r5, _0808D31C  @ =0x00000B2E
	add r2, r1, r5
	strh r0, [r2]
	mov r8, r1
	add r6, r3, #0
	add r5, r2, #0
	add r7, r4, #0
_0808D2A6:
	ldrh r1, [r6]
	ldr r0, _0808D320  @ =0x00000C88
	add r0, r0, r8
	ldrh r0, [r0]
	sub r1, r1, r0
	ldr r0, _0808D324  @ =0x00000C8A
	add r0, r0, r8
	ldrh r0, [r0]
	and r1, r1, r0
	mov r4, #240
	and r4, r4, r1
	lsl r4, r4, #2
	mov r0, #128
	lsl r0, r0, #2
	and r0, r0, r1
	lsl r0, r0, #4
	orr r4, r4, r0
	mov r0, #128
	lsl r0, r0, #1
	and r1, r1, r0
	lsl r1, r1, #3
	orr r4, r4, r1
	ldrh r0, [r5]
	add r1, r4, #0
	bl sub_0808CFE4
	ldrh r0, [r5]
	add r0, r0, #16
	add r1, r4, #0
	bl sub_0808CFE4
	ldrh r0, [r5]
	add r0, r0, #32
	add r1, r4, #0
	bl sub_0808CFE4
	ldrh r0, [r6]
	add r0, r0, #16
	strh r0, [r6]
	ldrb r0, [r7]
	sub r0, r0, #1
	strb r0, [r7]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0808D2A6
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808D30C:
	.4byte gRam
_0808D310:
	.4byte 0x0000097C
_0808D314:
	.4byte 0x00000A02
_0808D318:
	.4byte 0x00000964
_0808D31C:
	.4byte 0x00000B2E
_0808D320:
	.4byte 0x00000C88
_0808D324:
	.4byte 0x00000C8A
	THUMB_FUNC_END sub_0808D254

