	THUMB_FUNC_START sub_081215E0
sub_081215E0: @ 0x081215E0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r2, _081216B8  @ =gUnknown_020068A4
	add r4, r0, r2
	ldr r3, _081216BC  @ =gRam
	ldr r5, _081216C0  @ =0x00000DC5
	add r2, r3, r5
	add r2, r1, r2
	ldrb r2, [r2]
	strb r2, [r4]
	ldr r2, _081216C4  @ =gUnknown_020068B0
	add r4, r0, r2
	add r5, r5, #20
	add r2, r3, r5
	add r2, r1, r2
	ldrb r2, [r2]
	strb r2, [r4]
	ldr r2, _081216C8  @ =gUnknown_020068BC
	add r4, r0, r2
	sub r5, r5, #10
	add r2, r3, r5
	add r2, r1, r2
	ldrb r2, [r2]
	strb r2, [r4]
	ldr r2, _081216CC  @ =gUnknown_020068C8
	add r4, r0, r2
	add r5, r5, #20
	add r2, r3, r5
	add r2, r1, r2
	ldrb r2, [r2]
	strb r2, [r4]
	ldr r2, _081216D0  @ =gUnknown_020068D4
	add r4, r0, r2
	ldr r5, _081216D4  @ =0x00000A92
	add r2, r3, r5
	add r2, r1, r2
	ldrb r2, [r2]
	strb r2, [r4]
	ldr r2, _081216D8  @ =gUnknown_02006880
	add r4, r0, r2
	ldr r5, _081216DC  @ =0x00000DED
	add r2, r3, r5
	add r2, r1, r2
	ldrb r2, [r2]
	strb r2, [r4]
	ldr r2, _081216E0  @ =gUnknown_0200688C
	add r4, r0, r2
	add r5, r5, #10
	add r2, r3, r5
	add r2, r1, r2
	ldrb r2, [r2]
	strb r2, [r4]
	ldr r2, _081216E4  @ =gUnknown_02006898
	add r4, r0, r2
	ldr r5, _081216E8  @ =0x00000A88
	add r2, r3, r5
	add r2, r1, r2
	ldrb r2, [r2]
	strb r2, [r4]
	ldr r2, _081216EC  @ =gUnknown_02006906
	add r4, r0, r2
	ldr r5, _081216F0  @ =0x00000E01
	add r2, r3, r5
	add r2, r1, r2
	ldrb r2, [r2]
	strb r2, [r4]
	ldr r2, _081216F4  @ =gUnknown_02006912
	add r4, r0, r2
	add r5, r5, #10
	add r2, r3, r5
	add r2, r1, r2
	ldrb r2, [r2]
	strb r2, [r4]
	ldr r2, _081216F8  @ =gUnknown_0200691E
	add r4, r0, r2
	ldr r5, _081216FC  @ =0x00000A9C
	add r2, r3, r5
	add r2, r1, r2
	ldrb r2, [r2]
	strb r2, [r4]
	ldr r2, _08121700  @ =gUnknown_020068FA
	add r4, r0, r2
	ldr r5, _08121704  @ =0x00000E29
	add r2, r3, r5
	add r2, r1, r2
	ldrb r2, [r2]
	strb r2, [r4]
	ldr r2, _08121708  @ =gUnknown_020068E0
	add r4, r0, r2
	add r5, r5, #10
	add r2, r3, r5
	add r2, r1, r2
	ldrb r2, [r2]
	strb r2, [r4]
	ldr r2, _0812170C  @ =gUnknown_0200692A
	add r0, r0, r2
	sub r5, r5, #20
	add r3, r3, r5
	add r1, r1, r3
	ldrb r1, [r1]
	strb r1, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081216B8:
	.4byte gUnknown_020068A4
_081216BC:
	.4byte gRam
_081216C0:
	.4byte 0x00000DC5
_081216C4:
	.4byte gUnknown_020068B0
_081216C8:
	.4byte gUnknown_020068BC
_081216CC:
	.4byte gUnknown_020068C8
_081216D0:
	.4byte gUnknown_020068D4
_081216D4:
	.4byte 0x00000A92
_081216D8:
	.4byte gUnknown_02006880
_081216DC:
	.4byte 0x00000DED
_081216E0:
	.4byte gUnknown_0200688C
_081216E4:
	.4byte gUnknown_02006898
_081216E8:
	.4byte 0x00000A88
_081216EC:
	.4byte gUnknown_02006906
_081216F0:
	.4byte 0x00000E01
_081216F4:
	.4byte gUnknown_02006912
_081216F8:
	.4byte gUnknown_0200691E
_081216FC:
	.4byte 0x00000A9C
_08121700:
	.4byte gUnknown_020068FA
_08121704:
	.4byte 0x00000E29
_08121708:
	.4byte gUnknown_020068E0
_0812170C:
	.4byte gUnknown_0200692A
	THUMB_FUNC_END sub_081215E0

