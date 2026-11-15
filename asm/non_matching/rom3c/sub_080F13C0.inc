	THUMB_FUNC_START sub_080F13C0
sub_080F13C0: @ 0x080F13C0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r5, _080F1494  @ =gRam
	ldr r1, _080F1498  @ =0x00001082
	add r0, r5, r1
	add r0, r0, r6
	mov r10, r0
	mov r7, #0
	strb r7, [r0]
	ldr r2, _080F149C  @ =0x00001628
	add r0, r5, r2
	ldrb r2, [r0]
	ldr r3, _080F14A0  @ =0x00000D33
	add r0, r5, r3
	add r0, r0, r2
	mov r12, r0
	ldrb r0, [r0]
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r5
	mov r8, r1
	strb r0, [r1]
	add r3, r3, #8
	add r0, r5, r3
	add r4, r2, r0
	ldrb r0, [r4]
	ldr r1, _080F14A4  @ =gUnknown_03002B91
	strb r0, [r1]
	ldr r3, _080F14A8  @ =0x00000ED2
	add r0, r5, r3
	add r0, r6, r0
	ldrb r0, [r0]
	ldr r1, _080F14AC  @ =0x00000964
	add r3, r5, r1
	strb r0, [r3]
	ldr r1, _080F14B0  @ =0x00000EF2
	add r0, r5, r1
	add r0, r6, r0
	ldrb r0, [r0]
	ldr r1, _080F14B4  @ =0x00000965
	add r1, r1, r5
	mov r9, r1
	strb r0, [r1]
	mov r0, r8
	mov r1, #0
	ldrsh r0, [r0, r1]
	str r0, [sp]
	mov r1, #0
	ldrsh r0, [r3, r1]
	ldr r1, [sp]
	cmp r1, r0
	blt _080F14CC
	ldr r0, _080F14B8  @ =0x00000F52
	add r1, r5, r0
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080F14BC  @ =0x00000F22
	add r0, r5, r1
	add r0, r6, r0
	strb r7, [r0]
	sub r1, r1, #16
	add r0, r5, r1
	add r0, r6, r0
	strb r7, [r0]
	ldr r1, _080F14C0  @ =0x00001132
	add r0, r5, r1
	add r0, r6, r0
	mov r1, #2
	strb r1, [r0]
	ldr r1, _080F14C4  @ =0x00000D23
	add r0, r5, r1
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r3]
	add r1, r1, #8
	add r0, r5, r1
	add r0, r2, r0
	ldrb r0, [r0]
	mov r2, r9
	strb r0, [r2]
	ldrh r0, [r3]
	mov r3, r8
	ldrh r1, [r3]
	bl sub_080C8EEC
	add r1, r0, #0
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r0, #0
	bl sub_0808D328
	ldr r1, _080F14C8  @ =0x00000FC2
	add r0, r5, r1
	add r0, r6, r0
	mov r1, #16
	strb r1, [r0]
	b _080F154A
	.byte 0x00
	.byte 0x00
_080F1494:
	.4byte gRam
_080F1498:
	.4byte 0x00001082
_080F149C:
	.4byte 0x00001628
_080F14A0:
	.4byte 0x00000D33
_080F14A4:
	.4byte gUnknown_03002B91
_080F14A8:
	.4byte 0x00000ED2
_080F14AC:
	.4byte 0x00000964
_080F14B0:
	.4byte 0x00000EF2
_080F14B4:
	.4byte 0x00000965
_080F14B8:
	.4byte 0x00000F52
_080F14BC:
	.4byte 0x00000F22
_080F14C0:
	.4byte 0x00001132
_080F14C4:
	.4byte 0x00000D23
_080F14C8:
	.4byte 0x00000FC2
_080F14CC:
	ldr r3, _080F155C  @ =0x00001770
	add r1, r5, r3
	mov r0, #1
	mov r9, r0
	mov r0, #1
	strb r0, [r1]
	ldr r1, _080F1560  @ =0x00000D23
	add r0, r5, r1
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r3, _080F1564  @ =0x00000968
	add r0, r5, r3
	strb r1, [r0]
	ldr r1, _080F1568  @ =0x00000D2B
	add r0, r5, r1
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r2, _080F156C  @ =0x00000969
	add r0, r5, r2
	strb r1, [r0]
	mov r3, r12
	ldrb r1, [r3]
	add r2, r2, #3
	add r0, r5, r2
	strb r1, [r0]
	ldrb r1, [r4]
	ldr r3, _080F1570  @ =0x0000096D
	add r0, r5, r3
	strb r1, [r0]
	add r0, r6, #0
	mov r1, #64
	bl sub_080C2DCC
	ldr r1, _080F1574  @ =0x00000F12
	add r0, r5, r1
	add r0, r6, r0
	mov r2, r8
	ldrb r1, [r2]
	strb r1, [r0]
	ldr r3, _080F1578  @ =0x00000F22
	add r0, r5, r3
	add r0, r6, r0
	ldr r2, _080F157C  @ =gUnknown_03002B91
	ldrb r1, [r2]
	strb r1, [r0]
	add r3, r3, #144
	add r0, r5, r3
	add r0, r6, r0
	strb r7, [r0]
	mov r0, r10
	strb r7, [r0]
	ldr r2, _080F1580  @ =0x00000F92
	add r1, r5, r2
	add r1, r6, r1
	ldr r3, _080F1584  @ =0x00000996
	add r0, r5, r3
	ldrb r2, [r0]
	add r0, r6, #0
	eor r0, r0, r2
	lsr r0, r0, #3
	mov r2, r9
	and r0, r0, r2
	strb r0, [r1]
_080F154A:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F155C:
	.4byte 0x00001770
_080F1560:
	.4byte 0x00000D23
_080F1564:
	.4byte 0x00000968
_080F1568:
	.4byte 0x00000D2B
_080F156C:
	.4byte 0x00000969
_080F1570:
	.4byte 0x0000096D
_080F1574:
	.4byte 0x00000F12
_080F1578:
	.4byte 0x00000F22
_080F157C:
	.4byte gUnknown_03002B91
_080F1580:
	.4byte 0x00000F92
_080F1584:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080F13C0

