	THUMB_FUNC_START sub_080695B8
sub_080695B8: @ 0x080695B8
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	ldr r1, _08069604  @ =gRam
	ldr r2, _08069608  @ =0x0000098F
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _0806962A
	mov r4, #0
	add r6, r1, #0
	ldr r0, _0806960C  @ =0x00000994
	add r7, r6, r0
	mov r9, r4
	ldr r1, _08069610  @ =0x000009A4
	add r1, r1, r6
	mov r8, r1
	mov r5, #2
_080695DE:
	mov r0, #2
	ldr r1, _08069614  @ =gUnknown_03003E48
	bl sub_08135C3C
	lsl r0, r0, #16
	lsr r1, r0, #16
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #3
	bne _0806961C
	strb r5, [r7]
	ldr r2, _08069618  @ =0x000009A3
	add r0, r6, r2
	strb r5, [r0]
	mov r1, r9
	mov r0, r8
	b _08069628
	.byte 0x00
	.byte 0x00
_08069604:
	.4byte gRam
_08069608:
	.4byte 0x0000098F
_0806960C:
	.4byte 0x00000994
_08069610:
	.4byte 0x000009A4
_08069614:
	.4byte gUnknown_03003E48
_08069618:
	.4byte 0x000009A3
_0806961C:
	cmp r1, #0
	bne _080695DE
	ldr r0, _08069638  @ =gRam
	ldr r2, _0806963C  @ =0x0000098F
	add r0, r0, r2
	mov r1, #1
_08069628:
	strb r1, [r0]
_0806962A:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08069638:
	.4byte gRam
_0806963C:
	.4byte 0x0000098F
	THUMB_FUNC_END sub_080695B8

