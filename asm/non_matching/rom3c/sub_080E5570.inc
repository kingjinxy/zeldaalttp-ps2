	THUMB_FUNC_START sub_080E5570
sub_080E5570: @ 0x080E5570
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080E55B8  @ =gRam
	ldr r1, _080E55BC  @ =0x00000EA5
	add r2, r3, r1
	add r2, r0, r2
	ldr r4, _080E55C0  @ =gUnknown_08177498
	ldr r1, _080E55C4  @ =0x0000164C
	add r5, r3, r1
	ldrb r1, [r5]
	add r1, r1, r4
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r1, _080E55C8  @ =0x00001022
	add r2, r3, r1
	add r2, r0, r2
	ldr r4, _080E55CC  @ =gUnknown_0817749A
	ldrb r1, [r5]
	add r1, r1, r4
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r1, _080E55D0  @ =0x000011B2
	add r3, r3, r1
	add r3, r0, r3
	ldr r2, _080E55D4  @ =gUnknown_0817749C
	ldrb r1, [r5]
	add r1, r1, r2
	ldrb r1, [r1]
	strb r1, [r3]
	bl sub_080E57FC
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E55B8:
	.4byte gRam
_080E55BC:
	.4byte 0x00000EA5
_080E55C0:
	.4byte gUnknown_08177498
_080E55C4:
	.4byte 0x0000164C
_080E55C8:
	.4byte 0x00001022
_080E55CC:
	.4byte gUnknown_0817749A
_080E55D0:
	.4byte 0x000011B2
_080E55D4:
	.4byte gUnknown_0817749C
	THUMB_FUNC_END sub_080E5570

