	THUMB_FUNC_START sub_080696FC
sub_080696FC: @ 0x080696FC
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
	bl sub_080695B8
	ldr r4, _0806977C  @ =gRam
	ldr r0, _08069780  @ =0x00000994
	add r0, r0, r4
	mov r9, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _080697C2
	ldr r0, _08069784  @ =0x04000208
	strh r1, [r0]
	ldr r0, _08069788  @ =0x040000DC
	str r1, [r0]
	bl sub_0812A90C
	mov r7, #0
	cmp r7, r8
	bcs _080697B8
	ldr r1, _0806978C  @ =0x000009A4
	add r1, r1, r4
	mov r10, r1
	ldr r0, _08069790  @ =0x000009A3
	add r3, r4, r0
	mov r2, #2
_08069744:
	mov r4, #0
_08069746:
	add r0, r5, #0
	add r1, r6, #0
	str r2, [sp]
	str r3, [sp, #4]
	bl sub_08135FA8
	lsl r0, r0, #16
	lsr r1, r0, #16
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, [sp]
	ldr r3, [sp, #4]
	cmp r4, #3
	bne _080697A2
	mov r1, r8
	cmp r1, #3
	bne _08069794
	mov r0, #5
	mov r1, r9
	strb r0, [r1]
	strb r2, [r3]
	mov r1, #0
	mov r0, r10
	strb r1, [r0]
	b _080697BC
	.byte 0x00
	.byte 0x00
_0806977C:
	.4byte gRam
_08069780:
	.4byte 0x00000994
_08069784:
	.4byte 0x04000208
_08069788:
	.4byte 0x040000DC
_0806978C:
	.4byte 0x000009A4
_08069790:
	.4byte 0x000009A3
_08069794:
	mov r0, r9
	strb r4, [r0]
	strb r2, [r3]
	mov r0, #0
	mov r1, r10
	strb r0, [r1]
	b _080697BC
_080697A2:
	cmp r1, #0
	bne _08069746
	add r0, r5, #1
	lsl r0, r0, #16
	lsr r5, r0, #16
	add r6, r6, #8
	add r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, r8
	bcc _08069744
_080697B8:
	bl sub_0812A958
_080697BC:
	ldr r1, _080697D4  @ =0x04000208
	mov r0, #1
	strh r0, [r1]
_080697C2:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080697D4:
	.4byte 0x04000208
	THUMB_FUNC_END sub_080696FC

