	THUMB_FUNC_START sub_08069640
sub_08069640: @ 0x08069640
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	add r6, r1, #0
	lsl r0, r0, #16
	lsr r5, r0, #16
	lsl r2, r2, #16
	lsr r2, r2, #16
	mov r8, r2
	ldr r1, _080696B0  @ =0x04000208
	mov r0, #0
	strh r0, [r1]
	ldr r1, _080696B4  @ =0x040000DC
	mov r0, #0
	str r0, [r1]
	bl sub_0812A90C
	mov r7, #0
	cmp r7, r8
	bcs _080696DE
	ldr r3, _080696B8  @ =gRam
	ldr r0, _080696BC  @ =0x00000994
	add r0, r0, r3
	mov r9, r0
	ldr r1, _080696C0  @ =0x000009A4
	add r1, r1, r3
	mov r10, r1
	mov r2, #2
_0806967E:
	mov r4, #0
_08069680:
	add r0, r5, #0
	add r1, r6, #0
	str r2, [sp]
	str r3, [sp, #4]
	bl sub_08135DC4
	lsl r0, r0, #16
	lsr r1, r0, #16
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, [sp]
	ldr r3, [sp, #4]
	cmp r4, #3
	bne _080696C8
	mov r0, r9
	strb r2, [r0]
	ldr r1, _080696C4  @ =0x000009A3
	add r0, r3, r1
	strb r2, [r0]
	mov r1, #0
	mov r0, r10
	strb r1, [r0]
	b _080696E2
_080696B0:
	.4byte 0x04000208
_080696B4:
	.4byte 0x040000DC
_080696B8:
	.4byte gRam
_080696BC:
	.4byte 0x00000994
_080696C0:
	.4byte 0x000009A4
_080696C4:
	.4byte 0x000009A3
_080696C8:
	cmp r1, #0
	bne _08069680
	add r0, r5, #1
	lsl r0, r0, #16
	lsr r5, r0, #16
	add r6, r6, #8
	add r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, r8
	bcc _0806967E
_080696DE:
	bl sub_0812A958
_080696E2:
	ldr r1, _080696F8  @ =0x04000208
	mov r0, #1
	strh r0, [r1]
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080696F8:
	.4byte 0x04000208
	THUMB_FUNC_END sub_08069640

