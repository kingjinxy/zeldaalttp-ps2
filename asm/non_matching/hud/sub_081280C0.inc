	THUMB_FUNC_START sub_081280C0
sub_081280C0: @ 0x081280C0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r0, _081281B4  @ =gRam
	ldr r1, _081281B8  @ =0x00001AF0
	add r5, r0, r1
	ldrh r1, [r5]
	cmp r1, #0
	beq _08128110
	ldr r1, _081281BC  @ =gUnknown_08180C18
	add r2, r0, #0
	ldr r3, _081281C0  @ =0x00001AF2
	add r0, r2, r3
	ldrh r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r1, r0, r1
	ldrh r2, [r1]
	ldr r4, _081281B4  @ =gRam
	ldr r6, _081281C4  @ =0x00001AF6
	add r1, r4, r6
	mov r4, #0
	mov r3, #0
	strh r2, [r1]
	ldr r1, _081281C8  @ =gUnknown_08180C1E
	add r0, r0, r1
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r7, _081281B4  @ =gRam
	ldr r2, _081281CC  @ =0x00001AF4
	add r1, r7, r2
	strh r0, [r1]
	strh r3, [r5]
	ldrh r0, [r1]
	ldr r3, _081281D0  @ =gUnknown_02010470
	add r0, r0, r3
	strb r4, [r0]
_08128110:
	ldr r4, _081281B4  @ =gRam
	ldr r5, _081281D4  @ =0x00001AD2
	add r0, r4, r5
	ldrh r0, [r0]
	ldr r6, _081281D8  @ =gUnknown_02005481
	add r1, r0, r6
	ldrb r3, [r1]
	ldr r7, _081281DC  @ =gTextPointer
	add r0, r0, r7
	ldrb r1, [r0]
	ldr r0, _081281CC  @ =0x00001AF4
	add r4, r4, r0
	ldrh r0, [r4]
	ldr r5, _081281E0  @ =gUnknown_02010471
	add r2, r0, r5
	ldr r6, _081281D0  @ =gUnknown_02010470
	add r0, r0, r6
	ldrb r0, [r0]
	add r0, r0, #11
	strb r0, [r2]
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	ldr r0, _081281E4  @ =gUnknown_08180C24
	lsl r1, r1, #2
	add r1, r1, r0
	mov r5, #248
	add r0, r3, #0
	and r0, r0, r5
	lsl r0, r0, #1
	mov r2, #7
	and r3, r3, r2
	add r0, r0, r3
	lsl r0, r0, #6
	ldr r1, [r1]
	add r1, r1, r0
	mov r12, r1
	ldrh r0, [r4]
	ldr r7, _081281E8  @ =gUnknown_0201046F
	add r0, r0, r7
	ldrb r1, [r0]
	add r3, r1, #0
	and r3, r3, r2
	cmp r3, #0
	bne _081281F8
	lsl r1, r1, #2
	ldr r2, _081281B4  @ =gRam
	ldr r3, _081281C4  @ =0x00001AF6
	add r0, r2, r3
	ldrh r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #2
	ldr r4, _081281EC  @ =gUnknown_02003080
	add r0, r0, r4
	add r2, r1, r0
	mov r5, #0
	ldr r7, _081281F0  @ =0x00000FFF
	ldr r6, _081281F4  @ =0xFFFFF000
	mov r4, #152
	lsl r4, r4, #2
	mov r3, #240
	lsl r3, r3, #1
_0812818C:
	mov r1, r12
	ldr r0, [r1]
	str r0, [r2]
	ldr r1, [r1, #32]
	and r1, r1, r7
	ldr r0, [r2, #32]
	and r0, r0, r6
	orr r1, r1, r0
	str r1, [r2, #32]
	cmp r5, #7
	bne _081281A6
	add r2, r2, r4
	add r12, r12, r3
_081281A6:
	add r5, r5, #1
	mov r0, #4
	add r12, r12, r0
	add r2, r2, #4
	cmp r5, #15
	ble _0812818C
	b _081283B0
_081281B4:
	.4byte gRam
_081281B8:
	.4byte 0x00001AF0
_081281BC:
	.4byte gUnknown_08180C18
_081281C0:
	.4byte 0x00001AF2
_081281C4:
	.4byte 0x00001AF6
_081281C8:
	.4byte gUnknown_08180C1E
_081281CC:
	.4byte 0x00001AF4
_081281D0:
	.4byte gUnknown_02010470
_081281D4:
	.4byte 0x00001AD2
_081281D8:
	.4byte gUnknown_02005481
_081281DC:
	.4byte gTextPointer
_081281E0:
	.4byte gUnknown_02010471
_081281E4:
	.4byte gUnknown_08180C24
_081281E8:
	.4byte gUnknown_0201046F
_081281EC:
	.4byte gUnknown_02003080
_081281F0:
	.4byte 0x00000FFF
_081281F4:
	.4byte 0xFFFFF000
_081281F8:
	cmp r3, #5
	bne _08128274
	and r1, r1, r5
	lsl r1, r1, #2
	ldr r2, _08128260  @ =gRam
	ldr r3, _08128264  @ =0x00001AF6
	add r0, r2, r3
	ldrh r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #2
	ldr r4, _08128268  @ =gUnknown_02003080
	add r0, r0, r4
	add r2, r1, r0
	mov r3, #20
	mov r5, #12
	mov r8, r5
	mov r5, #0
	ldr r0, _0812826C  @ =gUnknown_08180C50
	ldr r6, [r0, #20]
	ldr r0, _08128270  @ =gUnknown_08180C30
	ldr r4, [r0, #20]
	mov r7, #152
	lsl r7, r7, #2
	mov r9, r7
_08128228:
	ldr r1, [r2]
	and r1, r1, r6
	mov r7, r12
	ldr r0, [r7]
	lsl r0, r0, r3
	and r0, r0, r4
	orr r1, r1, r0
	str r1, [r2]
	ldr r1, [r7]
	mov r0, r8
	lsr r1, r1, r0
	ldr r0, [r7, #32]
	lsl r0, r0, r3
	orr r1, r1, r0
	str r1, [r2, #32]
	cmp r5, #7
	bne _08128252
	add r2, r2, r9
	mov r1, #240
	lsl r1, r1, #1
	add r12, r12, r1
_08128252:
	add r5, r5, #1
	mov r7, #4
	add r12, r12, r7
	add r2, r2, #4
	cmp r5, #15
	ble _08128228
	b _081283B0
_08128260:
	.4byte gRam
_08128264:
	.4byte 0x00001AF6
_08128268:
	.4byte gUnknown_02003080
_0812826C:
	.4byte gUnknown_08180C50
_08128270:
	.4byte gUnknown_08180C30
_08128274:
	cmp r3, #4
	bhi _0812831C
	and r1, r1, r5
	lsl r1, r1, #2
	ldr r2, _08128308  @ =gRam
	ldr r4, _0812830C  @ =0x00001AF6
	add r0, r2, r4
	ldrh r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #2
	ldr r5, _08128310  @ =gUnknown_02003080
	add r0, r0, r5
	add r4, r1, r0
	lsl r6, r3, #2
	mov r0, #8
	sub r0, r0, r3
	lsl r0, r0, #26
	lsr r0, r0, #24
	mov r10, r0
	add r2, r3, #3
	mov r5, #0
	add r1, r6, #0
	ldr r3, _08128314  @ =gUnknown_08180C50
	add r0, r1, r3
	ldr r0, [r0]
	mov r9, r0
	ldr r0, _08128318  @ =gUnknown_08180C30
	add r1, r1, r0
	ldr r1, [r1]
	mov r8, r1
	lsl r2, r2, #2
	add r0, r2, r0
	ldr r0, [r0]
	str r0, [sp]
	add r2, r2, r3
	ldr r3, [r2]
_081282BC:
	ldr r1, [r4]
	mov r7, r9
	and r1, r1, r7
	mov r2, r12
	ldr r0, [r2]
	lsl r0, r0, r6
	mov r7, r8
	and r0, r0, r7
	orr r1, r1, r0
	str r1, [r4]
	ldr r2, [r4, #32]
	ldr r0, [sp]
	and r2, r2, r0
	mov r7, r12
	ldr r1, [r7]
	mov r0, r10
	lsr r1, r1, r0
	ldr r0, [r7, #32]
	lsl r0, r0, r6
	orr r1, r1, r0
	and r1, r1, r3
	orr r2, r2, r1
	str r2, [r4, #32]
	cmp r5, #7
	bne _081282FA
	mov r1, #152
	lsl r1, r1, #2
	add r4, r4, r1
	mov r2, #240
	lsl r2, r2, #1
	add r12, r12, r2
_081282FA:
	add r5, r5, #1
	mov r7, #4
	add r12, r12, r7
	add r4, r4, #4
	cmp r5, #15
	ble _081282BC
	b _081283B0
_08128308:
	.4byte gRam
_0812830C:
	.4byte 0x00001AF6
_08128310:
	.4byte gUnknown_02003080
_08128314:
	.4byte gUnknown_08180C50
_08128318:
	.4byte gUnknown_08180C30
_0812831C:
	and r1, r1, r5
	lsl r1, r1, #2
	ldr r2, _081283CC  @ =gRam
	ldr r4, _081283D0  @ =0x00001AF6
	add r0, r2, r4
	ldrh r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #2
	ldr r5, _081283D4  @ =gUnknown_02003080
	add r0, r0, r5
	add r4, r1, r0
	lsl r7, r3, #2
	mov r0, #8
	sub r0, r0, r3
	lsl r0, r0, #26
	lsr r6, r0, #24
	sub r2, r3, #5
	lsl r2, r2, #24
	mov r5, #0
	add r1, r7, #0
	ldr r3, _081283D8  @ =gUnknown_08180C50
	add r0, r1, r3
	ldr r0, [r0]
	mov r10, r0
	ldr r0, _081283DC  @ =gUnknown_08180C30
	add r1, r1, r0
	ldr r1, [r1]
	mov r9, r1
	lsr r2, r2, #22
	add r0, r2, r0
	ldr r0, [r0]
	mov r8, r0
	add r2, r2, r3
	ldr r2, [r2]
_08128360:
	ldr r1, [r4]
	mov r0, r10
	and r1, r1, r0
	mov r3, r12
	ldr r0, [r3]
	lsl r0, r0, r7
	mov r3, r9
	and r0, r0, r3
	orr r1, r1, r0
	str r1, [r4]
	mov r0, r12
	ldr r1, [r0]
	lsr r1, r1, r6
	ldr r0, [r0, #32]
	lsl r0, r0, r7
	orr r1, r1, r0
	str r1, [r4, #32]
	ldr r1, [r4, #64]
	mov r3, r8
	and r1, r1, r3
	mov r3, r12
	ldr r0, [r3, #32]
	lsr r0, r0, r6
	and r0, r0, r2
	orr r1, r1, r0
	str r1, [r4, #64]
	cmp r5, #7
	bne _081283A4
	mov r0, #152
	lsl r0, r0, #2
	add r4, r4, r0
	mov r1, #240
	lsl r1, r1, #1
	add r12, r12, r1
_081283A4:
	add r5, r5, #1
	mov r3, #4
	add r12, r12, r3
	add r4, r4, #4
	cmp r5, #15
	ble _08128360
_081283B0:
	ldr r4, _081283CC  @ =gRam
	ldr r5, _081283E0  @ =0x00001AD2
	add r1, r4, r5
	ldrh r0, [r1]
	add r0, r0, #2
	strh r0, [r1]
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_081283CC:
	.4byte gRam
_081283D0:
	.4byte 0x00001AF6
_081283D4:
	.4byte gUnknown_02003080
_081283D8:
	.4byte gUnknown_08180C50
_081283DC:
	.4byte gUnknown_08180C30
_081283E0:
	.4byte 0x00001AD2
	THUMB_FUNC_END sub_081280C0

