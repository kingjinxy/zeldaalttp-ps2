	THUMB_FUNC_START sub_080A0454
sub_080A0454: @ 0x080A0454
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r4, _080A0470  @ =gRam
	ldr r1, _080A0474  @ =0x000009B2
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080A0478
	bl sub_080A05A8
	b _080A0502
_080A0470:
	.4byte gRam
_080A0474:
	.4byte 0x000009B2
_080A0478:
	ldr r2, _080A050C  @ =0x000016FC
	add r1, r4, r2
	mov r3, #255
	mov r8, r3
	ldrb r0, [r1]
	strh r0, [r1]
	mov r6, #150
	lsl r6, r6, #4
	add r7, r4, r6
	ldrh r0, [r7]
	mov r1, #8
	neg r1, r1
	and r1, r1, r0
	lsl r1, r1, #3
	ldr r0, _080A0510  @ =0x0000096C
	add r5, r4, r0
	strh r1, [r5]
	ldr r2, _080A0514  @ =0x00000964
	add r3, r4, r2
	ldrh r2, [r3]
	mov r0, #63
	and r0, r0, r2
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	add r6, r6, #176
	add r2, r4, r6
	ldrb r0, [r2]
	cmp r0, #0
	beq _080A04BE
	mov r6, #128
	lsl r6, r6, #5
	add r0, r1, r6
	lsl r0, r0, #16
	lsr r1, r0, #16
_080A04BE:
	add r6, r1, #0
	mov r1, #0
	ldrsh r0, [r3, r1]
	lsl r0, r0, #3
	mov r3, #0
	ldrsh r1, [r7, r3]
	ldrb r2, [r2]
	bl sub_080928A4
	lsl r0, r0, #16
	lsr r1, r0, #16
	ldr r2, _080A0518  @ =0x00001811
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A04E0
	mov r1, #0
_080A04E0:
	mov r3, r8
	and r1, r1, r3
	strh r1, [r5]
	ldr r2, _080A051C  @ =0x00000A22
	add r0, r4, r2
	strh r1, [r0]
	ldr r3, _080A0520  @ =0x000009F6
	add r0, r4, r3
	strh r6, [r0]
	ldr r1, _080A0524  @ =gUnknown_0816832C
	mov r6, #0
	ldrsh r0, [r5, r6]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
_080A0502:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080A050C:
	.4byte 0x000016FC
_080A0510:
	.4byte 0x0000096C
_080A0514:
	.4byte 0x00000964
_080A0518:
	.4byte 0x00001811
_080A051C:
	.4byte 0x00000A22
_080A0520:
	.4byte 0x000009F6
_080A0524:
	.4byte gUnknown_0816832C
	THUMB_FUNC_END sub_080A0454

