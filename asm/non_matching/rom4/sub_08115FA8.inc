	THUMB_FUNC_START sub_08115FA8
sub_08115FA8: @ 0x08115FA8
	push {r4,lr}
	ldr r4, _08115FEC  @ =gRam
	ldr r1, _08115FF0  @ =0x00001754
	add r0, r4, r1
	ldrb r0, [r0]
	add r0, r0, #1
	mov r1, #20
	bl __modsi3
	add r2, r0, #0
	ldr r1, _08115FF4  @ =0x0000096C
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	beq _08116000
	ldr r1, _08115FF8  @ =0x000009C6
	add r0, r4, r1
	ldrh r0, [r0]
	ldr r1, _08115FFC  @ =gUnknown_02002280
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _0811600A
	lsl r1, r2, #24
	lsr r1, r1, #24
	mov r0, #0
	bl sub_080FB02C
	b _0811600A
	.byte 0x00
	.byte 0x00
_08115FEC:
	.4byte gRam
_08115FF0:
	.4byte 0x00001754
_08115FF4:
	.4byte 0x0000096C
_08115FF8:
	.4byte 0x000009C6
_08115FFC:
	.4byte gUnknown_02002280
_08116000:
	lsl r1, r2, #24
	lsr r1, r1, #24
	mov r0, #0
	bl sub_080FAFF8
_0811600A:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08115FA8

