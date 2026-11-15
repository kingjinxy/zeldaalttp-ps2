	THUMB_FUNC_START sub_081146A4
sub_081146A4: @ 0x081146A4
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _08114754  @ =gRam
	ldr r2, _08114758  @ =0x00001787
	add r1, r3, r2
	mov r4, #0
	strb r4, [r1]
	ldr r5, _0811475C  @ =0x00000ED2
	add r1, r3, r5
	add r1, r0, r1
	ldrb r2, [r1]
	add r5, r5, #32
	add r1, r3, r5
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #8
	orr r2, r2, r1
	lsl r2, r2, #16
	ldr r1, _08114760  @ =0xFFFA0000
	add r2, r2, r1
	lsr r2, r2, #16
	ldr r1, _08114764  @ =gUnknown_0200EBA0
	strb r2, [r1]
	add r1, r1, #20
	lsr r2, r2, #8
	strb r2, [r1]
	ldr r2, _08114768  @ =0x00000EE2
	add r1, r3, r2
	add r1, r0, r1
	ldrb r1, [r1]
	add r5, r5, #16
	add r2, r3, r5
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	lsl r1, r1, #16
	mov r0, #128
	lsl r0, r0, #9
	add r1, r1, r0
	lsr r1, r1, #16
	ldr r0, _0811476C  @ =gUnknown_0200EBC8
	strb r1, [r0]
	add r0, r0, #20
	lsr r1, r1, #8
	strb r1, [r0]
	add r0, r0, #20
	strb r4, [r0]
	ldr r2, _08114770  @ =gUnknown_0200EC04
	ldr r1, _08114774  @ =gUnknown_0817E9EC
	mov r5, #161
	lsl r5, r5, #4
	add r0, r3, r5
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	lsr r0, r0, #2
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r2]
	ldr r0, _08114778  @ =0x00001757
	add r1, r3, r0
	mov r0, #64
	strb r0, [r1]
	ldr r1, _0811477C  @ =0x00001754
	add r0, r3, r1
	strb r4, [r0]
	ldr r2, _08114780  @ =0x00001758
	add r0, r3, r2
	strb r4, [r0]
	ldr r5, _08114784  @ =0x00001755
	add r0, r3, r5
	strb r4, [r0]
	add r1, r1, #7
	add r0, r3, r1
	strb r4, [r0]
	sub r2, r2, #63
	add r0, r3, r2
	strb r4, [r0]
	sub r5, r5, #235
	add r3, r3, r5
	strb r4, [r3]
	bl sub_08114788
	pop {r4,r5}
	pop {r0}
	bx r0
_08114754:
	.4byte gRam
_08114758:
	.4byte 0x00001787
_0811475C:
	.4byte 0x00000ED2
_08114760:
	.4byte 0xFFFA0000
_08114764:
	.4byte gUnknown_0200EBA0
_08114768:
	.4byte 0x00000EE2
_0811476C:
	.4byte gUnknown_0200EBC8
_08114770:
	.4byte gUnknown_0200EC04
_08114774:
	.4byte gUnknown_0817E9EC
_08114778:
	.4byte 0x00001757
_0811477C:
	.4byte 0x00001754
_08114780:
	.4byte 0x00001758
_08114784:
	.4byte 0x00001755
	THUMB_FUNC_END sub_081146A4

