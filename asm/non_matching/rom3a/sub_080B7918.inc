	THUMB_FUNC_START sub_080B7918
sub_080B7918: @ 0x080B7918
	push {r4,r5,lr}
	sub sp, sp, #40
	ldr r3, _080B79A8  @ =gRam
	ldr r1, _080B79AC  @ =0x00000996
	add r0, r3, r1
	ldrb r2, [r0]
	lsr r2, r2, #1
	mov r0, #2
	and r2, r2, r0
	lsl r2, r2, #24
	ldr r4, _080B79B0  @ =gUnknown_020068B1
	ldrb r0, [r4]
	lsr r0, r0, #1
	mov r1, #7
	and r0, r0, r1
	mov r5, #150
	lsl r5, r5, #4
	add r3, r3, r5
	strb r0, [r3]
	ldrb r0, [r3]
	ldr r1, _080B79B4  @ =gUnknown_08170228
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r0, _080B79B8  @ =gUnknown_0816FEBE
	add r0, r1, r0
	str r0, [sp, #20]
	ldr r0, _080B79BC  @ =gUnknown_0816FECC
	add r0, r1, r0
	str r0, [sp, #24]
	ldr r0, _080B79C0  @ =gUnknown_0816FEDA
	add r0, r1, r0
	str r0, [sp, #28]
	ldr r0, _080B79C4  @ =gUnknown_08170208
	lsr r2, r2, #25
	lsl r2, r2, #2
	add r0, r2, r0
	ldr r0, [r0]
	add r0, r0, r1
	str r0, [sp, #32]
	ldr r0, _080B79C8  @ =gUnknown_08170210
	add r2, r2, r0
	ldr r0, [r2]
	add r0, r0, r1
	str r0, [sp, #36]
	add r1, sp, #12
	mov r0, #103
	strh r0, [r1]
	mov r0, #26
	strh r0, [r1, #2]
	ldrb r0, [r3]
	add r2, r1, #0
	ldr r1, _080B79CC  @ =gUnknown_08170220
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r2, #4]
	mov r1, sp
	add r0, sp, #28
	ldm r0!, {r2,r3,r5}
	stm r1!, {r2,r3,r5}
	ldr r0, [sp, #12]
	ldr r1, [sp, #16]
	ldr r2, [sp, #20]
	ldr r3, [sp, #24]
	bl sub_080B7B40
	ldrb r0, [r4]
	cmp r0, #0
	beq _080B79D0
	sub r0, r0, #1
	strb r0, [r4]
	b _080B79E6
_080B79A8:
	.4byte gRam
_080B79AC:
	.4byte 0x00000996
_080B79B0:
	.4byte gUnknown_020068B1
_080B79B4:
	.4byte gUnknown_08170228
_080B79B8:
	.4byte gUnknown_0816FEBE
_080B79BC:
	.4byte gUnknown_0816FECC
_080B79C0:
	.4byte gUnknown_0816FEDA
_080B79C4:
	.4byte gUnknown_08170208
_080B79C8:
	.4byte gUnknown_08170210
_080B79CC:
	.4byte gUnknown_08170220
_080B79D0:
	ldr r1, _080B79F0  @ =gUnknown_020068C2
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080B79E6
	sub r1, r1, #2
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080B79E6:
	add sp, sp, #40
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B79F0:
	.4byte gUnknown_020068C2
	THUMB_FUNC_END sub_080B7918

