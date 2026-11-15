	THUMB_FUNC_START sub_080A0534
sub_080A0534: @ 0x080A0534
	push {lr}
	sub sp, sp, #4
	add r2, r0, #0
	ldr r1, _080A054C  @ =gRam
	ldr r3, _080A0550  @ =0x00001811
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A0554
	mov r2, #0
	b _080A0572
	.byte 0x00
	.byte 0x00
_080A054C:
	.4byte gRam
_080A0550:
	.4byte 0x00001811
_080A0554:
	ldr r3, _080A0598  @ =0x00000964
	add r0, r1, r3
	mov r3, #0
	ldrsh r0, [r0, r3]
	lsl r0, r0, #3
	mov r3, #150
	lsl r3, r3, #4
	add r1, r1, r3
	mov r3, #0
	ldrsh r1, [r1, r3]
	mov r3, sp
	bl sub_0808C254
	lsl r0, r0, #16
	lsr r2, r0, #16
_080A0572:
	ldr r1, _080A059C  @ =gRam
	mov r0, #255
	and r2, r2, r0
	ldr r0, _080A05A0  @ =0x0000096C
	add r1, r1, r0
	strh r2, [r1]
	ldr r2, _080A05A4  @ =gUnknown_0816872C
	mov r3, #0
	ldrsh r0, [r1, r3]
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r0, [r0]
	bl _call_via_r0
	ldr r0, [sp]
	add sp, sp, #4
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080A0598:
	.4byte 0x00000964
_080A059C:
	.4byte gRam
_080A05A0:
	.4byte 0x0000096C
_080A05A4:
	.4byte gUnknown_0816872C
	THUMB_FUNC_END sub_080A0534

