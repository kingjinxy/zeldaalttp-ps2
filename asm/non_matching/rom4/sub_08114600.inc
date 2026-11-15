	THUMB_FUNC_START sub_08114600
sub_08114600: @ 0x08114600
	push {r4,r5,lr}
	ldr r1, _0811467C  @ =gUnknown_0200EBA0
	ldr r2, _08114680  @ =gRam
	mov r3, #182
	lsl r3, r3, #5
	add r0, r2, r3
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #20
	ldr r5, _08114684  @ =0x000016C1
	add r0, r2, r5
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #20
	add r3, r3, #4
	add r0, r2, r3
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #20
	add r5, r5, #4
	add r0, r2, r5
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r4, _08114688  @ =gUnknown_0200EC04
	ldr r1, _0811468C  @ =0x000016D5
	add r0, r2, r1
	ldrb r1, [r0]
	lsr r1, r1, #1
	ldr r3, _08114690  @ =gUnknown_0817E9EC
	mov r5, #161
	lsl r5, r5, #4
	add r0, r2, r5
	ldrb r0, [r0]
	add r0, r0, r3
	ldrb r0, [r0]
	lsr r0, r0, #2
	orr r1, r1, r0
	strb r1, [r4]
	ldr r0, _08114694  @ =0x00001757
	add r3, r2, r0
	mov r1, #0
	mov r0, #64
	strb r0, [r3]
	ldr r3, _08114698  @ =0x00001754
	add r0, r2, r3
	strb r1, [r0]
	ldr r5, _0811469C  @ =0x00001758
	add r0, r2, r5
	strb r1, [r0]
	add r3, r3, #1
	add r0, r2, r3
	strb r1, [r0]
	add r5, r5, #3
	add r0, r2, r5
	strb r1, [r0]
	ldr r0, _081146A0  @ =0x00001719
	add r2, r2, r0
	strb r1, [r2]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811467C:
	.4byte gUnknown_0200EBA0
_08114680:
	.4byte gRam
_08114684:
	.4byte 0x000016C1
_08114688:
	.4byte gUnknown_0200EC04
_0811468C:
	.4byte 0x000016D5
_08114690:
	.4byte gUnknown_0817E9EC
_08114694:
	.4byte 0x00001757
_08114698:
	.4byte 0x00001754
_0811469C:
	.4byte 0x00001758
_081146A0:
	.4byte 0x00001719
	THUMB_FUNC_END sub_08114600

