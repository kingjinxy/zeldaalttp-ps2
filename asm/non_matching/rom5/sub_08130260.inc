	THUMB_FUNC_START sub_08130260
sub_08130260: @ 0x08130260
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	mov r1, #2
	mov r4, #160
	lsl r4, r4, #1
	ldr r6, _081302C4  @ =gUnknown_02030000
	mov r3, #244
	lsl r3, r3, #2
	mov r0, #7
	mov r8, r0
	ldr r2, _081302C8  @ =gUnknown_03002ED0
	mov r12, r2
	ldr r7, _081302CC  @ =0x0000FF08
	mov r9, r7
_08130280:
	mov r2, r12
	ldrh r0, [r2]
	add r0, r4, r0
	mov r2, r8
	add r4, r4, #16
	sub r5, r1, #1
	cmp r2, #0
	blt _081302AC
	lsl r0, r0, #1
	ldr r7, _081302D0  @ =gUnknown_02000800
	add r1, r0, r7
_08130296:
	lsl r0, r3, #1
	add r0, r0, r6
	ldrh r0, [r0]
	strh r0, [r1]
	add r0, r3, #1
	lsl r0, r0, #16
	lsr r3, r0, #16
	add r1, r1, #2
	sub r2, r2, #1
	cmp r2, #0
	bge _08130296
_081302AC:
	mov r0, #255
	and r0, r0, r3
	cmp r0, #0
	beq _081302DC
	mov r0, #248
	and r0, r0, r3
	cmp r0, #248
	bne _081302D4
	mov r0, r9
	and r3, r3, r0
	b _081302DC
	.byte 0x00
	.byte 0x00
_081302C4:
	.4byte gUnknown_02030000
_081302C8:
	.4byte gUnknown_03002ED0
_081302CC:
	.4byte 0x0000FF08
_081302D0:
	.4byte gUnknown_02000800
_081302D4:
	add r0, r3, #0
	add r0, r0, #8
	lsl r0, r0, #16
	lsr r3, r0, #16
_081302DC:
	add r1, r5, #0
	cmp r1, #0
	bge _08130280
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08130260

	.byte 0x00
	.byte 0x00
