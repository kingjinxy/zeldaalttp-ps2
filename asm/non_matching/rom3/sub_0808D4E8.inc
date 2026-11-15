	THUMB_FUNC_START sub_0808D4E8
sub_0808D4E8: @ 0x0808D4E8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	ldr r0, _0808D6E8  @ =gRam
	mov r8, r0
	ldr r1, _0808D6EC  @ =0x00000C04
	add r1, r1, r8
	mov r0, #52
	strh r0, [r1]
	ldr r1, _0808D6F0  @ =0x00000C3E
	str r1, [sp]
	ldr r0, _0808D6F4  @ =0x00000C0A
	add r0, r0, r8
	strh r1, [r0]
	mov r0, sp
	bl sub_0808EDC0
	mov r0, sp
	bl sub_0808EDC0
	mov r0, sp
	bl sub_0808EDC0
	ldr r0, _0808D6F8  @ =0x00000CBE
	str r0, [sp]
	mov r0, sp
	bl sub_0808EDC0
	mov r0, sp
	bl sub_0808EDC0
	mov r0, sp
	bl sub_0808EDC0
	ldr r0, _0808D6FC  @ =0x00000C42
	bl sub_08092568
	ldr r4, _0808D700  @ =0x0000096C
	add r4, r4, r8
	strh r0, [r4]
	mov r2, #0
	ldrsh r1, [r4, r2]
	lsl r1, r1, #1
	ldr r3, _0808D704  @ =gUnknown_02018000
	add r1, r1, r3
	ldr r5, _0808D708  @ =gUnknown_08155B4E
	ldr r6, _0808D70C  @ =0x00007108
	add r0, r5, r6
	ldrh r0, [r0]
	strh r0, [r1]
	mov r7, #0
	ldrsh r0, [r4, r7]
	lsl r0, r0, #1
	ldr r1, _0808D710  @ =gUnknown_02018002
	mov r9, r1
	add r0, r0, r9
	ldr r2, _0808D714  @ =0x0000710A
	add r1, r5, r2
	ldrh r1, [r1]
	strh r1, [r0]
	mov r3, #0
	ldrsh r0, [r4, r3]
	lsl r0, r0, #1
	ldr r6, _0808D718  @ =gUnknown_02018040
	mov r10, r6
	add r0, r0, r10
	ldr r7, _0808D71C  @ =0x0000710C
	add r1, r5, r7
	ldrh r1, [r1]
	strh r1, [r0]
	mov r1, #0
	ldrsh r0, [r4, r1]
	lsl r0, r0, #1
	ldr r7, _0808D720  @ =gUnknown_02018042
	add r0, r0, r7
	add r2, r2, #4
	add r1, r5, r2
	ldrh r1, [r1]
	strh r1, [r0]
	ldr r6, _0808D724  @ =0x00003884
	mov r3, #0
	ldrsh r0, [r4, r3]
	bl sub_080925A4
	add r1, r0, #0
	add r0, r6, #0
	mov r2, #0
	bl sub_0808B624
	ldr r0, _0808D728  @ =0x00000CC2
	bl sub_08092568
	strh r0, [r4]
	mov r6, #0
	ldrsh r0, [r4, r6]
	lsl r0, r0, #1
	ldr r1, _0808D704  @ =gUnknown_02018000
	add r0, r0, r1
	ldr r2, _0808D72C  @ =0x00007128
	add r1, r5, r2
	ldrh r1, [r1]
	strh r1, [r0]
	mov r3, #0
	ldrsh r0, [r4, r3]
	lsl r0, r0, #1
	add r0, r0, r9
	ldr r6, _0808D730  @ =0x0000712A
	add r1, r5, r6
	ldrh r1, [r1]
	strh r1, [r0]
	mov r1, #0
	ldrsh r0, [r4, r1]
	lsl r0, r0, #1
	add r0, r0, r10
	add r2, r2, #4
	add r1, r5, r2
	ldrh r1, [r1]
	strh r1, [r0]
	mov r3, #0
	ldrsh r0, [r4, r3]
	lsl r0, r0, #1
	add r0, r0, r7
	add r6, r6, #4
	add r1, r5, r6
	ldrh r1, [r1]
	strh r1, [r0]
	ldr r6, _0808D734  @ =0x00003894
	mov r7, #0
	ldrsh r0, [r4, r7]
	bl sub_080925A4
	add r1, r0, #0
	add r0, r6, #0
	mov r2, #0
	bl sub_0808B624
	mov r4, #204
	lsl r4, r4, #4
	add r0, r4, #0
	bl sub_08092568
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r8
	strh r0, [r2]
	mov r1, #0
	ldrsh r0, [r2, r1]
	lsl r0, r0, #1
	ldr r3, _0808D704  @ =gUnknown_02018000
	add r0, r0, r3
	ldr r7, _0808D738  @ =0x000020AA
	add r6, r7, #0
	strh r6, [r0]
	mov r1, #0
	ldrsh r0, [r2, r1]
	lsl r0, r0, #1
	add r0, r0, r9
	strh r6, [r0]
	mov r3, #0
	ldrsh r0, [r2, r3]
	lsl r0, r0, #1
	ldr r7, _0808D73C  @ =gUnknown_02020000
	add r0, r0, r7
	ldr r3, _0808D740  @ =0x00007120
	add r1, r5, r3
	ldrh r1, [r1]
	mov r7, sp
	strh r1, [r7, #4]
	strh r1, [r0]
	mov r1, #0
	ldrsh r0, [r2, r1]
	lsl r0, r0, #1
	ldr r3, _0808D744  @ =gUnknown_02020002
	add r0, r0, r3
	ldr r7, _0808D748  @ =0x00007122
	add r5, r5, r7
	ldrh r5, [r5]
	mov r9, r5
	strh r5, [r0]
	strh r4, [r2]
	ldr r0, _0808D74C  @ =0x00000964
	add r8, r8, r0
	mov r2, #0
	mov r1, r8
	strh r2, [r1]
	add r0, r4, #0
	bl sub_08092568
	lsl r0, r0, #1
	ldr r3, _0808D750  @ =0x00001FFF
	add r1, r3, #0
	and r0, r0, r1
	mov r7, r8
	strh r0, [r7]
	ldr r5, _0808D754  @ =gUnknown_02000400
	ldrh r4, [r5]
	lsl r2, r4, #1
	ldr r1, _0808D758  @ =gUnknown_02000402
	add r3, r2, r1
	ldr r7, _0808D75C  @ =0xFFFFC000
	add r1, r7, #0
	add r0, r0, r1
	strh r0, [r3]
	ldr r1, _0808D760  @ =gUnknown_02000404
	add r0, r2, r1
	mov r3, #2
	strh r3, [r0]
	ldr r7, _0808D764  @ =gUnknown_02000406
	add r0, r2, r7
	strh r6, [r0]
	add r1, r1, #4
	add r0, r2, r1
	strh r6, [r0]
	ldr r6, _0808D768  @ =gUnknown_0200040A
	add r1, r2, r6
	ldr r7, _0808D76C  @ =0xFFFFA000
	add r0, r7, #0
	mov r6, r8
	ldrh r6, [r6]
	add r0, r0, r6
	strh r0, [r1]
	ldr r7, _0808D770  @ =gUnknown_0200040C
	add r0, r2, r7
	strh r3, [r0]
	ldr r1, _0808D774  @ =gUnknown_0200040E
	add r0, r2, r1
	mov r3, sp
	ldrh r3, [r3, #4]
	strh r3, [r0]
	ldr r6, _0808D778  @ =gUnknown_02000410
	add r0, r2, r6
	mov r7, r9
	strh r7, [r0]
	ldr r0, _0808D77C  @ =gUnknown_02000412
	add r2, r2, r0
	ldr r1, _0808D780  @ =0x0000FFFF
	add r0, r1, #0
	strh r0, [r2]
	add r4, r4, #8
	strh r4, [r5]
	ldr r2, _0808D784  @ =gUnknown_02002298
	ldrb r0, [r2]
	mov r1, #32
	orr r0, r0, r1
	strb r0, [r2]
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0808D6E8:
	.4byte gRam
_0808D6EC:
	.4byte 0x00000C04
_0808D6F0:
	.4byte 0x00000C3E
_0808D6F4:
	.4byte 0x00000C0A
_0808D6F8:
	.4byte 0x00000CBE
_0808D6FC:
	.4byte 0x00000C42
_0808D700:
	.4byte 0x0000096C
_0808D704:
	.4byte gUnknown_02018000
_0808D708:
	.4byte gUnknown_08155B4E
_0808D70C:
	.4byte 0x00007108
_0808D710:
	.4byte gUnknown_02018002
_0808D714:
	.4byte 0x0000710A
_0808D718:
	.4byte gUnknown_02018040
_0808D71C:
	.4byte 0x0000710C
_0808D720:
	.4byte gUnknown_02018042
_0808D724:
	.4byte 0x00003884
_0808D728:
	.4byte 0x00000CC2
_0808D72C:
	.4byte 0x00007128
_0808D730:
	.4byte 0x0000712A
_0808D734:
	.4byte 0x00003894
_0808D738:
	.4byte 0x000020AA
_0808D73C:
	.4byte gUnknown_02020000
_0808D740:
	.4byte 0x00007120
_0808D744:
	.4byte gUnknown_02020002
_0808D748:
	.4byte 0x00007122
_0808D74C:
	.4byte 0x00000964
_0808D750:
	.4byte 0x00001FFF
_0808D754:
	.4byte gUnknown_02000400
_0808D758:
	.4byte gUnknown_02000402
_0808D75C:
	.4byte 0xFFFFC000
_0808D760:
	.4byte gUnknown_02000404
_0808D764:
	.4byte gUnknown_02000406
_0808D768:
	.4byte gUnknown_0200040A
_0808D76C:
	.4byte 0xFFFFA000
_0808D770:
	.4byte gUnknown_0200040C
_0808D774:
	.4byte gUnknown_0200040E
_0808D778:
	.4byte gUnknown_02000410
_0808D77C:
	.4byte gUnknown_02000412
_0808D780:
	.4byte 0x0000FFFF
_0808D784:
	.4byte gUnknown_02002298
	THUMB_FUNC_END sub_0808D4E8

