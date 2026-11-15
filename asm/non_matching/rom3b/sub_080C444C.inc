	THUMB_FUNC_START sub_080C444C
sub_080C444C: @ 0x080C444C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r2, _080C44CC  @ =gRam
	ldr r1, _080C44D0  @ =0x00000EE2
	add r0, r2, r1
	add r0, r3, r0
	ldrb r6, [r0]
	ldr r4, _080C44D4  @ =0x00000F02
	add r0, r2, r4
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r0, r6, r0
	ldr r7, _080C44D8  @ =0x00000952
	add r1, r2, r7
	ldrh r1, [r1]
	sub r0, r0, r1
	lsl r0, r0, #16
	mov r5, #255
	lsr r0, r0, #24
	cmp r0, #0
	bne _080C44C4
	ldr r1, _080C44DC  @ =0x00000ED2
	add r0, r2, r1
	add r4, r3, r0
	ldrb r1, [r4]
	ldr r7, _080C44E0  @ =0x00000EF2
	add r0, r2, r7
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r7, _080C44E4  @ =0x00000958
	add r0, r2, r7
	ldrh r0, [r0]
	sub r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #24
	and r1, r1, r5
	cmp r1, #0
	bne _080C44C4
	ldr r1, _080C44E8  @ =0x000015F1
	add r0, r2, r1
	strb r6, [r0]
	ldrb r1, [r4]
	ldr r4, _080C44EC  @ =0x000015F2
	add r0, r2, r4
	strb r1, [r0]
	ldr r7, _080C44F0  @ =0x000015F0
	add r1, r2, r7
	mov r0, #5
	strb r0, [r1]
	ldr r1, _080C44F4  @ =0x000010F2
	add r0, r2, r1
	add r0, r3, r0
	ldrb r1, [r0]
	ldr r3, _080C44F8  @ =0x00000DA4
	add r0, r2, r3
	strb r1, [r0]
_080C44C4:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C44CC:
	.4byte gRam
_080C44D0:
	.4byte 0x00000EE2
_080C44D4:
	.4byte 0x00000F02
_080C44D8:
	.4byte 0x00000952
_080C44DC:
	.4byte 0x00000ED2
_080C44E0:
	.4byte 0x00000EF2
_080C44E4:
	.4byte 0x00000958
_080C44E8:
	.4byte 0x000015F1
_080C44EC:
	.4byte 0x000015F2
_080C44F0:
	.4byte 0x000015F0
_080C44F4:
	.4byte 0x000010F2
_080C44F8:
	.4byte 0x00000DA4
	THUMB_FUNC_END sub_080C444C

