	THUMB_FUNC_START sub_081175A0
sub_081175A0: @ 0x081175A0
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r5, _081175BC  @ =gRam
	ldr r1, _081175C0  @ =0x00000E1F
	add r0, r5, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _081175C4
	add r0, r6, #0
	bl sub_0811787C
	b _08117774
_081175BC:
	.4byte gRam
_081175C0:
	.4byte 0x00000E1F
_081175C4:
	ldr r2, _081175D8  @ =0x000009AD
	add r0, r5, r2
	ldrb r1, [r0]
	cmp r1, #0
	beq _081175DC
	add r0, r6, #0
	bl sub_081177A0
	b _08117774
	.byte 0x00
	.byte 0x00
_081175D8:
	.4byte 0x000009AD
_081175DC:
	ldr r2, _0811762C  @ =0x00001818
	add r0, r5, r2
	add r7, r6, r0
	strb r1, [r7]
	add r0, r6, #0
	bl sub_080C1768
	add r0, r6, #0
	bl sub_080BF774
	add r0, r6, #0
	mov r1, #0
	bl sub_080C09FC
	lsl r0, r0, #24
	cmp r0, #0
	bne _08117624
	ldr r1, _08117630  @ =0x00000E3D
	add r0, r5, r1
	add r4, r6, r0
	ldrb r0, [r4]
	mov r1, #8
	orr r0, r0, r1
	strb r0, [r4]
	add r0, r6, #0
	mov r1, #0
	bl sub_080BFA64
	lsl r0, r0, #24
	ldr r2, _08117634  @ =0x0000187A
	add r1, r5, r2
	add r1, r6, r1
	ldrb r1, [r1]
	strb r1, [r7]
	cmp r0, #0
	beq _08117638
_08117624:
	add r0, r6, #0
	bl sub_08117E0C
	b _08117666
_0811762C:
	.4byte 0x00001818
_08117630:
	.4byte 0x00000E3D
_08117634:
	.4byte 0x0000187A
_08117638:
	ldrb r0, [r4]
	mov r1, #12
	orr r0, r0, r1
	strb r0, [r4]
	ldr r0, _081176A4  @ =0x00000A7E
	add r4, r5, r0
	add r4, r6, r4
	ldrb r0, [r4]
	ldr r1, _081176A8  @ =0x00001734
	add r5, r5, r1
	strb r0, [r5]
	add r0, r6, #0
	mov r1, #0
	bl sub_080BFA64
	lsl r0, r0, #24
	ldrb r1, [r5]
	strb r1, [r4]
	cmp r0, #0
	beq _08117666
	add r0, r6, #0
	bl sub_08117E0C
_08117666:
	ldr r3, _081176AC  @ =gRam
	ldr r2, _081176B0  @ =0x00000E29
	add r1, r3, r2
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _081176B4  @ =0x00000E3D
	add r1, r3, r0
	add r1, r6, r1
	ldrb r2, [r1]
	mov r0, #243
	and r0, r0, r2
	strb r0, [r1]
	ldr r1, _081176B8  @ =0x00001818
	add r0, r3, r1
	add r0, r6, r0
	ldrb r1, [r0]
	mov r0, #190
	lsl r0, r0, #5
	add r2, r3, r0
	strb r1, [r2]
	mov r4, #240
	add r0, r4, #0
	and r0, r0, r1
	cmp r0, #192
	bne _081176BC
	bl sub_0808A4CC
	b _081176D2
	.byte 0x00
	.byte 0x00
_081176A4:
	.4byte 0x00000A7E
_081176A8:
	.4byte 0x00001734
_081176AC:
	.4byte gRam
_081176B0:
	.4byte 0x00000E29
_081176B4:
	.4byte 0x00000E3D
_081176B8:
	.4byte 0x00001818
_081176BC:
	ldr r1, _0811777C  @ =0x0000187A
	add r0, r3, r1
	add r0, r6, r0
	ldrb r1, [r0]
	strb r1, [r2]
	add r0, r4, #0
	and r0, r0, r1
	cmp r0, #192
	bne _081176D2
	bl sub_0808A4CC
_081176D2:
	ldr r7, _08117780  @ =gRam
	ldr r2, _08117784  @ =0x000009B2
	add r0, r7, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0811771C
	ldr r1, _08117788  @ =0x00000DCF
	add r0, r7, r1
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r2, _0811778C  @ =0x00000DE3
	add r0, r7, r2
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r2, _08117790  @ =0x00000964
	add r0, r7, r2
	strh r1, [r0]
	ldr r1, _08117794  @ =0x00000DC5
	add r0, r7, r1
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r2, _08117798  @ =0x00000DD9
	add r0, r7, r2
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	mov r2, #150
	lsl r2, r2, #4
	add r0, r7, r2
	strh r1, [r0]
	bl sub_08086740
_0811771C:
	ldr r0, _0811779C  @ =0x0000178A
	add r4, r7, r0
	ldrb r5, [r4]
	mov r1, #32
	add r0, r5, #0
	orr r0, r0, r1
	strb r0, [r4]
	ldr r1, _08117788  @ =0x00000DCF
	add r0, r7, r1
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r2, _0811778C  @ =0x00000DE3
	add r0, r7, r2
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #8
	asr r1, r1, #3
	ldr r2, _08117790  @ =0x00000964
	add r0, r7, r2
	strh r1, [r0]
	ldr r1, _08117794  @ =0x00000DC5
	add r0, r7, r1
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r2, _08117798  @ =0x00000DD9
	add r0, r7, r2
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #8
	mov r2, #150
	lsl r2, r2, #4
	add r0, r7, r2
	strh r1, [r0]
	mov r0, #0
	bl sub_080A0534
	strb r5, [r4]
	add r0, r6, #0
	bl sub_081177A0
_08117774:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811777C:
	.4byte 0x0000187A
_08117780:
	.4byte gRam
_08117784:
	.4byte 0x000009B2
_08117788:
	.4byte 0x00000DCF
_0811778C:
	.4byte 0x00000DE3
_08117790:
	.4byte 0x00000964
_08117794:
	.4byte 0x00000DC5
_08117798:
	.4byte 0x00000DD9
_0811779C:
	.4byte 0x0000178A
	THUMB_FUNC_END sub_081175A0

